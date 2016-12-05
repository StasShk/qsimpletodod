#include "mainwindow.h"
#include <QApplication>

#include "snetwork.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    sNetwork new_server;
    QObject::connect(&w, SIGNAL(ConnectActivate(QString)),
            &new_server, SLOT(setServAdress(QString)));


    w.show();

    return a.exec();
}
