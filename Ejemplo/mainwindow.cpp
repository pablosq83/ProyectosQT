#include "mainwindow.h"
#include "ui_mainwindow.h"

int cuenta=0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    cuenta++;
    ui->lcdNumber->display(cuenta);
}
