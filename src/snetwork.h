#ifndef SNETWORK_H
#define SNETWORK_H

#include <QObject>
#include <QtNetwork/QNetworkAccessManager>

#include <QtNetwork/QNetworkRequest>

#include <QtNetwork/QNetworkReply>

#include <QUrl>


class sNetwork : public QObject
{
    Q_OBJECT

public:
    explicit sNetwork(QObject *parent = 0);

    Q_PROPERTY(QUrl ServerAdress READ ServerAdress WRITE setServAdress NOTIFY ServerAdressChanged)

    QUrl ServerAdress() const;

signals:
    void ServerAdressChanged(QUrl ServerAdress);

public slots:
    void setServAdress(QUrl ServerAdress);

protected:
     QNetworkAccessManager *manager;

private:
    QUrl m_ServerAdress;

};

#endif // SNETWORK_H
