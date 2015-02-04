#ifndef GROUP_H
#define GROUP_H

#include <QString>
#include <QList>
#include "user.h"
#include "contactlistitemable.h"

class Group
{
public:
    Group(SkypeInterface*,const QString);
    QString getGroupId();
    QString getDisplayName();
    int getNrOfUsers();
    int getNrOfUsersOnline();
    QList<User*> getUsers();
private:
    QString groupId;
    SkypeInterface* skype;
    QString get(const QString);
};

#endif // GROUP_H
