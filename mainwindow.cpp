#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->skype = new SkypeInterface();
    connect(this->skype, SIGNAL(skypeConnected()), this, SLOT(skypeConnected()));
    connect(this->skype, SIGNAL(skypeRefused()), this, SLOT(skypeRefused()));
}

void MainWindow::run() {
    QTimer::singleShot(100, this, SLOT(connectToSkype()));
}

void MainWindow::skypeConnected() {
    qDebug() << "Connected";
    SkypeWindow* sk = new SkypeWindow(this->skype, 0);
    sk->show();
    this->hide();
    sk->run();
}
void MainWindow::skypeRefused() {
    qDebug() << "Skype refused";
    QApplication::exit();
}

void MainWindow::connectToSkype() {
    qDebug() << "Connecting to Skype";
    this->skype->Attach();
}

MainWindow::~MainWindow()
{
    delete ui;
}
