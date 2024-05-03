#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

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


void MainWindow::on_mapButton_clicked()
{

}


void MainWindow::on_upButton_clicked()
{

}


void MainWindow::on_rightButton_clicked()
{

}


void MainWindow::on_downButton_clicked()
{

}


void MainWindow::on_leftButton_clicked()
{

}

