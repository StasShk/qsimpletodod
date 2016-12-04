#include "snetwork.h"

sNetwork::sNetwork(QObject *parent) : QObject(parent)
{
    manager = new QNetworkAccessManager(this);

    connect(manager, SIGNAL(finished(QNetworkReply *)),
    this, SLOT(replyFinished(QNetworkReply *)));
}


QUrl sNetwork::ServerAdress() const{
    return m_ServerAdress;
}

void sNetwork::setServAdress(QUrl ServerAdress){
    if ( m_ServerAdress == ServerAdress)
        return;

    m_ServerAdress = ServerAdress;

    QNetworkRequest request(m_ServerAdress);


    QNetworkReply *reply = manager->get(request);

}
