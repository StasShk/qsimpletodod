#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->ConnectButton, SIGNAL(clicked()), this, SLOT(connectClicked()));


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::connectClicked(){
    QString adress = ui->ServerNameL->text();
    emit ConnectActivate(adress);

}
