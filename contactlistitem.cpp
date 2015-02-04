#include "contactlistitem.h"
#include <QDebug>

ContactListItem::ContactListItem(User* u) : QListWidgetItem(u->getFullname())
{
    this->user = u;
    qDebug() << u->getHandle();
}

ContactListItem::ContactListItem(QIcon &icon, User* u) : QListWidgetItem(icon, u->getFullname())
{
    this->user = u;
    qDebug() << u->getHandle();
}

User* ContactListItem::getUser() {
    return this->user;
}
