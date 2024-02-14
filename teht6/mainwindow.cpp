#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}


void MainWindow::on_btnCount_clicked()
{
    qDebug()<<"Painettu Count";
    number++;
    ui->lineEditNumberPlus->setText(QString::number(number));
}


void MainWindow::on_btnReset_clicked()
{
    qDebug()<<"Painettu Reset";
    number = 0;
    ui->lineEditNumberPlus->setText(QString::number(number));
}

