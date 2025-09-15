#include "Function.h"

Function::Function(std::string functionString,  double startX, double endX, int numX) {
    m_parser.DefineVar("x", &m_varX);
    m_parser.SetExpr(functionString);
    setPoints(startX, endX, numX);
}

double Function::eval(double val_x) {
    try {
        m_varX = val_x;
        return m_parser.Eval();
    } catch (mu::Parser::exception_type &e) {
        return 0;
    }
}

QVector<double> Function::getXCoords(double start, double end, int num) {
    QVector<double> xCoords(num);

    if (num == 0) return xCoords;

    if (num == 1) {
        xCoords[0] = start;
        return xCoords;
    }

    double delta = (end - start) / (num - 1);

    for (int i = 0; i < num - 1; i++)
        xCoords[i] = start + delta*i;
    xCoords[num - 1] = end;

    return xCoords;
}

QVector<double> Function::getYCoords(double start, double end, int num) {
    QVector<double> xCoords = getXCoords(start, end, num);
    QVector<double> yCoords(num);

    for (int i = 0; i < num - 1; i ++) {
        yCoords[i] = eval(xCoords[i]);
    }

    yCoords[num-1] = eval(xCoords[num-1]);

    return yCoords;
}

void Function::setPoints(double start, double end, int num) {
    QVector<double> xCoords = getXCoords(start, end, num);
    QVector<double> yCoords = getYCoords(start, end, num);

    for (int i = 0; i < num; i++) {
        double x = xCoords[i];
        double y = yCoords[i];

        m_points.append(QPointF(x, y));
    }

}

QVector<QPointF> Function::points() {
    return m_points;
}

// ovo koristimo za pointOfView igraca koji puca, bez fixedY bi bilo iz pointOfView posmatraca!
void Function::translatePointsPlayerView(double coorX, double coorY) {

    double fixedY = points().at(0).y();

    for (QPointF &point : m_points) {
        double currentX = point.x();
        double currentY = point.y();
        point.setX(currentX + coorX);

        point.setY(currentY + coorY - fixedY);
    }
}

void Function::translatePointsObserverView(double coorX, double coorY) {
    for (QPointF &point : m_points) {
        double currentX = point.x();
        double currentY = point.y();
        point.setX(currentX + coorX);

        point.setY(currentY + coorY);
    }
}


void Function::scaleToCanvas(double width, double height, double gridWidth) {
    for (QPointF &point : m_points) {
        double currentX = point.x();
        double currentY = point.y();

        point.setX(currentX*width/gridWidth);

        point.setY(-currentY*width/gridWidth);
    }
}

bool Function::equals(Function* other) {

    if (this->points().size() != other->points().size()) {
        return false;
    }

    double tolerance = 1e-5;

    for (int i = 0; i < this->points().size(); ++i) {

        if (std::isnan(this->points().at(i).y()) && std::isnan(other->points().at(i).y())){
            continue;
        }

        if (std::abs(this->points().at(i).x() - other->points().at(i).x()) > tolerance ||
            std::abs(this->points().at(i).y() - other->points().at(i).y()) > tolerance) {
            return false;
        }
    }

    return true;
}

void Function::removePointsAfterCutoff(int cutoff) {
    if (cutoff < m_points.size() - 1) {
        m_points.remove(cutoff + 1, m_points.size() - cutoff - 1);
    }
}

void Function::cutOffNan() {
    auto isInvalid = [](const QPointF &point) {
        return qIsNaN(point.x()) || qIsNaN(point.y());
    };

    for (int i = 0; i < m_points.size(); ) {
        if (isInvalid(m_points[i])) {
            m_points.removeAt(i);
        } else {
            ++i;
        }
    }
}

















