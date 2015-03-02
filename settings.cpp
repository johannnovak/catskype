#include "settings.h"
#include "ui_settings.h"

/*
 * Settings window, but contains also program settings (chat color, ...)
 */
Settings::Settings(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    this->fontColor = QColor(0,0,0);
    this->boldFont = false;
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

bool Settings::getBold() {
    return this->boldFont;
}

void Settings::setBold(bool b) {
    this->boldFont = b;
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

void Settings::on_chk_bold_clicked()
{
    if(ui->chk_bold->isChecked()) {
        this->boldFont = true;
    } else {
        this->boldFont = false;
    }
}
