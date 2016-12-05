#include "snetwork.h"

sNetwork::sNetwork(QObject *parent) : QObject(parent)
{
    manager = new QNetworkAccessManager(this);

    connect(manager, SIGNAL(finished(QNetworkReply *)),
    this, SLOT(replyFinished(QNetworkReply *)));
}


QString sNetwork::ServerAdress() const{
    return m_ServerAdress;
}

void sNetwork::setServAdress(QString ServerAdress){
    if ( m_ServerAdress == ServerAdress)
        return;

    m_ServerAdress = "http://127.0.0.1:8000/";
    QUrl url(m_ServerAdress);

    QNetworkRequest request(url);


    QNetworkReply *reply;
    manager->get(request);

}
