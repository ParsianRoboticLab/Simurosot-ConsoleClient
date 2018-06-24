#include <QCoreApplication>
#include <QDebug>
#include "client.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    UDPClient server;

    return a.exec();
}
