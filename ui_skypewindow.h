/********************************************************************************
** Form generated from reading UI file 'skypewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKYPEWINDOW_H
#define UI_SKYPEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkypeWindow
{
public:
    QAction *actionRemove_offline;
	 QAction *actionSettings;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_3;
    QListWidget *contactsView;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QTextEdit *msgView;
    QTextEdit *msgSend;
    QListWidget *onlineView;
    QMenuBar *menubar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *SkypeWindow)
    {
        if (SkypeWindow->objectName().isEmpty())
            SkypeWindow->setObjectName(QStringLiteral("SkypeWindow"));
        SkypeWindow->resize(791, 447);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SkypeWindow->sizePolicy().hasHeightForWidth());
        SkypeWindow->setSizePolicy(sizePolicy);
        actionRemove_offline = new QAction(SkypeWindow);
        actionRemove_offline->setObjectName(QStringLiteral("actionRemove_offline"));
        actionSettings = new QAction(SkypeWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        centralwidget = new QWidget(SkypeWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        sizePolicy.setHeightForWidth(splitter_3->sizePolicy().hasHeightForWidth());
        splitter_3->setSizePolicy(sizePolicy);
        splitter_3->setOrientation(Qt::Horizontal);
        splitter_3->setChildrenCollapsible(false);
        contactsView = new QListWidget(splitter_3);
        contactsView->setObjectName(QStringLiteral("contactsView"));
        sizePolicy.setHeightForWidth(contactsView->sizePolicy().hasHeightForWidth());
        contactsView->setSizePolicy(sizePolicy);
        contactsView->setResizeMode(QListView::Adjust);
        contactsView->setSpacing(0);
        splitter_3->addWidget(contactsView);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter_2->setChildrenCollapsible(false);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(false);
        msgView = new QTextEdit(splitter);
        msgView->setObjectName(QStringLiteral("msgView"));
        sizePolicy.setHeightForWidth(msgView->sizePolicy().hasHeightForWidth());
        msgView->setSizePolicy(sizePolicy);
        msgView->setMinimumSize(QSize(50, 100));
        splitter->addWidget(msgView);
        msgSend = new QTextEdit(splitter);
        msgSend->setObjectName(QStringLiteral("msgSend"));
        sizePolicy.setHeightForWidth(msgSend->sizePolicy().hasHeightForWidth());
        msgSend->setSizePolicy(sizePolicy);
        msgSend->setMinimumSize(QSize(50, 50));
        msgSend->setBaseSize(QSize(0, 50));
        splitter->addWidget(msgSend);
        splitter_2->addWidget(splitter);
        onlineView = new QListWidget(splitter_2);
        onlineView->setObjectName(QStringLiteral("onlineView"));
        onlineView->setResizeMode(QListView::Adjust);
        onlineView->setSpacing(5);
        splitter_2->addWidget(onlineView);
        splitter_3->addWidget(splitter_2);

        verticalLayout->addWidget(splitter_3);


        verticalLayout_2->addLayout(verticalLayout);

        SkypeWindow->setCentralWidget(centralwidget);
        splitter_3->raise();
        menubar = new QMenuBar(SkypeWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 791, 20));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        SkypeWindow->setMenuBar(menubar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionRemove_offline);
        menuMenu->addAction(actionSettings);

        retranslateUi(SkypeWindow);

        QMetaObject::connectSlotsByName(SkypeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SkypeWindow)
    {
        SkypeWindow->setWindowTitle(QApplication::translate("SkypeWindow", "CatSkype", 0));
        actionRemove_offline->setText(QApplication::translate("SkypeWindow", "Remove offline", 0));
        actionSettings->setText(QApplication::translate("SkypeWindow", "Settings", 0));
        menuMenu->setTitle(QApplication::translate("SkypeWindow", "Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class SkypeWindow: public Ui_SkypeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKYPEWINDOW_H
