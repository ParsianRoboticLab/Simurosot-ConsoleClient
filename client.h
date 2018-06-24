#ifndef CLIENT_H
#define CLIENT_H


#include <QUdpSocket>

class UDPClient : public QObject
{
    Q_OBJECT

public:
    explicit UDPClient(QObject *parent = 0);

    void SayHello();

private:
    QUdpSocket *socket;

signals:

public slots:
    void readyRead();

};
#endif // CLIENT_H
