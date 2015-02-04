#include "mainwindow.h"
#include "skypewindow.h"
#include <QApplication>
#include <QDesktopWidget>

/*#include <QVBoxLayout>
#include <QWidget>*/
//#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //SkypeWindow w;
    w.move(QApplication::desktop()->screen()->rect().center() - w.rect().center());
    w.show();
    w.run();
    return a.exec();
}
