#ifndef SETTINGS_H
#define SETTINGS_H

#include <QMainWindow>
#include <QColorDialog>

namespace Ui {
class Settings;
}

class Settings : public QMainWindow
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);
    void setColor(QColor c);
    QColor getColor();
    ~Settings();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Settings *ui;
    QColor fontColor;
};

#endif // SETTINGS_H
