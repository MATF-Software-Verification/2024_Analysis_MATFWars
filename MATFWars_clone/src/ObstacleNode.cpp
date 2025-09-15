#include "ObstacleNode.h"
#include <QPainter>

#include "settings.h"

ObstacleNode::ObstacleNode(Obstacle * obstacle)
    : QGraphicsItem(),
    m_obstacleNode(obstacle)
{
}

QRectF ObstacleNode::boundingRect() const
{
    return QRectF(0, 0, m_canvasDiameter, m_canvasDiameter);
}

void ObstacleNode::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    QColor brushColor = Settings::obstColor;
    brushColor.setAlpha(255 * m_obstacleNode->health() / m_obstacleNode->maxHealth());

    painter->setBrush(brushColor);
    painter->setPen(Qt::NoPen);

    painter->drawEllipse(0,0, m_canvasDiameter, m_canvasDiameter);
}

void ObstacleNode::setCanvasDiameter(double newCanvasDiameter)
{
    m_canvasDiameter = newCanvasDiameter;
}
