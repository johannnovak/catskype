#ifndef USER_H
#define USER_H

#include <QString>
#include <QPixmap>
#include <QDBusReply>

class SkypeInterface;

/*class SkypeInterface {
public:
    QDBusReply<QString> Call(const QString);
};*/

class User
{
public:
    User(SkypeInterface*, QString);
    QString getAbout();
    QString getBirthday();
    QString getCity();
    QString getHandle();
    QString getCountry();
    QString getFullname();
    bool getBlocked();
    QString getMoodText();
    QString getOnlineStatus();
    QString getSex();
    QPixmap getAvatar();
private:
    QString handle;
    SkypeInterface* skype;
    QString get(const QString property);
};

#endif // USER_H
