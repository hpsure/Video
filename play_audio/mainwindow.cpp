#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "playthread.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
     this->playthread = new PlayThread(this);
     this->playthread->start();
}


void MainWindow::on_pushButton_2_clicked()
{
    qDebug()<<"退出按钮点击";
    // this->playthread->quit();
}

