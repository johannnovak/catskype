#include "user.h"
#include "skypeinterface.h"

User::User(SkypeInterface* sk, QString handle) {
    this->skype = sk;
    this->handle = handle;
}

QString User::get(const QString property) {
    QString reply = this->skype->Call(QString("GET USER %1 %2").arg(this->handle, property));
    return reply.right(reply.length() - (5 + this->handle.length() + 1 + property.length() + 1));
}

QString User::getAbout() {
    return QString();
}

QString User::getBirthday() {
    return QString();
}

QString User::getCity() {
    return QString();
}

QString User::getHandle() {
    return this->handle;
}

QString User::getCountry() {
    return QString();
}

QString User::getFullname() {
    QString fname = this->get("FULLNAME");
    if(fname == "")
        fname = this->handle;
    return fname;
}

bool User::getBlocked() {
    return false;
}

QString User::getMoodText() {
    return this->get("MOOD_TEXT");
}

QString User::getOnlineStatus() {
    return this->get("ONLINESTATUS");
}

QString User::getSex() {
    return QString();
}

QPixmap User::getAvatar() {
    return QString();
}
