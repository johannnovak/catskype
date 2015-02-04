#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QInputDialog>
#include "skypeinterface.h"
#include <QTimer>
#include "skypewindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void run();
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    SkypeInterface* skype;

public slots:
    void skypeConnected();
    void skypeRefused();
    void connectToSkype();
};

#endif // MAINWINDOW_H
