#ifndef SKYPEWINDOW_H
#define SKYPEWINDOW_H

#include <QMainWindow>
#include "skypeinterface.h"
#include <QGridLayout>
#include <QListWidget>
#include <QTextEdit>
#include <QPushButton>
#include <QKeyEvent>
#include <QScrollBar>
#include <QTimer>
#include <QThread>
#include "chattab.h"
#include "contactlistitem.h"
#include "grouplistitem.h"
#include "textdocumentimproved.h"
#include "settings.h"

namespace Ui {
class SkypeWindow;
}

class SkypeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SkypeWindow(SkypeInterface* sk, QWidget *parent = 0);
    void run();
    void doWizz();
    ~SkypeWindow();

public slots:
    void removeOffline();
    void openSettings();
    void skypeNotification(QString);
    void skypeChatMessageStatus(ChatMessage*,QString);
    void skypeOnlineStatusChanged(User*, QString);
    void skypeChatsReceived(QList<Chat*>);
    //void timerSlot();
private slots:
    void on_contactsView_itemClicked(QListWidgetItem *item);

private:
    Ui::SkypeWindow *ui;
    SkypeInterface* skype;
    ContactListItem* activeItem;
    QList<ChatTab*> tabs;
    Settings* settings;
    void addMessage(QString s);
    bool eventFilter(QObject *, QEvent *);
};

#endif // SKYPEWINDOW_H
