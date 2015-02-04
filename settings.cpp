#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    this->fontColor = QColor(0,0,0);
}

Settings::~Settings()
{
    delete ui;
}

void Settings::setColor(QColor c) {
    this->fontColor = c;
}

QColor Settings::getColor() {
    return this->fontColor;
}

void Settings::on_pushButton_clicked()
{
    this->hide();
}

void Settings::on_pushButton_2_clicked()
{
    this->fontColor = QColorDialog::getColor();
    ui->pushButton_2->setStyleSheet("QPushButton {color:"+this->fontColor.name()+";}");
    ui->pushButton_2->setText(this->fontColor.name());
}
