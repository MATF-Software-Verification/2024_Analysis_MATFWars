#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include<QColorDialog>
#include<QColor>
#include<QPalette>

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();

public:
    static QColor funcColor;
    static QColor obstColor;

private slots:
    void on_func_color_button_clicked();

    void on_obst_color_button_clicked();

private:
    Ui::Settings *ui;
    QString funcStyle;
    QString obstStyle;

protected:
     bool eventFilter(QObject *watched, QEvent *event) override;
};

#endif // SETTINGS_H
