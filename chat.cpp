#include "chat.h"
#include "skypeinterface.h"

Chat::Chat(SkypeInterface* sk, QString id)
{
    this->skype = sk;
    this->id = id;
}

QString Chat::get(const QString property) {
    QString reply = this->skype->Call(QString("GET CHAT %1 %2").arg(this->id, property));
    return reply.right(reply.length() - (5 + this->id.length() + 1 + property.length() + 1));
}

QString Chat::getId() {
    return this->id;
}

QDateTime Chat::getCreationDate() {
    QDateTime qdt;
    QString timestring = this->get("TIMESTAMP");
    int timestamp = timestring.toInt();
    qdt.setTime_t(timestamp);
    return qdt;
}

User* Chat::getAdder() {
    return new User(this->skype, this->get("ADDER"));
}

QString Chat::getStatus() {
    return this->get("STATUS");
}

QList<User*> Chat::getPosters() {
    QList<User*> users;
    return users;
}

QList<User*> Chat::getMembers() {
    QList<User*> users;
    return users;
}

QString Chat::getTopic() {
    return this->get("TOPIC");
}

QList<ChatMessage*> Chat::getChatMessages() {
    QList<ChatMessage*> messages;
    return messages;
}

QList<User*> Chat::getActiveMembers() {
    QList<User*> users;
    return users;
}

QString Chat::getFriendlyName() {
    return this->get("FRIENDLYNAME");
}

QList<ChatMessage*> Chat::getRecentChatMessages() {
    QList<ChatMessage*> messages;
    return messages;
}

void Chat::sendMessage(const QString msg) {
    this->skype->Call(QString("CHATMESSAGE %1 %2").arg(this->id, msg));
}
