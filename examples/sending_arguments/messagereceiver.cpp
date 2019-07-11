#include <QDebug>
#include "messagereceiver.h"

MessageReceiver::MessageReceiver(QObject *parent) : QObject(parent)
{
}

void MessageReceiver::receivedMessage(int instanceId, QByteArray message)
{
    qInfo() << "Received message from instance: " << instanceId;
    qInfo() << "Message Text: " << message;
}
