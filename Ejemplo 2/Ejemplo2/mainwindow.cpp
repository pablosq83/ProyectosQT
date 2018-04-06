#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    QString texto = ui->lineEdit->text();
    QString comando = "mkdir "+texto;
    system(comando.toUtf8().constData());
    ui->label->clear();
    ui->label->setText("Carpeta creada");
}
