#include "group.h"
#include "skypeinterface.h"

Group::Group(SkypeInterface *s, const QString id)
{
    this->groupId = id;
    this->skype = s;
}

QString Group::get(const QString property) {
    QString reply = this->skype->Call(QString("GET CHAT %1 %2").arg(this->groupId, property));
    return reply.right(reply.length() - (6 + this->groupId.length() + 1 + property.length() + 1));
}

QString Group::getDisplayName() {
    return this->get("DISPLAYNAME");
}

QString Group::getGroupId() {
    return this->groupId;
}

int Group::getNrOfUsers() {
    QString nrOfUsers = this->get("NROFUSERS");
   return nrOfUsers.toInt();
}

int Group::getNrOfUsersOnline() {
    QString nrOfUsersOnline = this->get("NROFUSERS_ONLINE");
    return nrOfUsersOnline.toInt();
}

QList<User*> Group::getUsers() {
    QList<User*> list;
    QString reply = this->get("USERS");
    // TODO
}
