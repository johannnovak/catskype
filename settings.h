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
    bool getBold();
    void setBold(bool);
    ~Settings();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_chk_bold_clicked();

private:
    Ui::Settings *ui;
    QColor fontColor;
    bool boldFont;
};

#endif // SETTINGS_H
