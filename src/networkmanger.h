#ifndef NETWORKMANAGER_H
#define NETWORKMANAGER_H

#include <QObject>
#include <QtNetwork/QNetworkAccessManager>

#include <QtNetwork/QNetworkRequest>

#include <QtNetwork/QNetworkReply>

#include <QUrl>


class NetworkManger : public QObject
{
    Q_OBJECT

public:
    explicit NetworkManger(QObject *parent = 0);

    Q_PROPERTY(QString ServerAdress READ ServerAdress WRITE setServAdress NOTIFY ServerAdressChanged)

    QString ServerAdress() const;

signals:
    void ServerAdressChanged(QString ServerAdress);

public slots:
    void setServAdress(QString ServerAdress);

protected:
     QNetworkAccessManager *manager;

private:
    QString m_ServerAdress;

};

#endif // SNETWORK_H
