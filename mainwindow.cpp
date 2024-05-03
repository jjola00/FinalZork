#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    mapVisible = false;
    ui->setupUi(this);
    connect(ui->mapButton, &QPushButton::clicked, this, &MainWindow::on_mapButton_clicked);
    connect(ui->closeMapButton, &QPushButton::clicked, this, &MainWindow::on_closeMapButton_clicked);
    ui->mapPrint->hide();
    ui->closeMapButton->hide();
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_mapButton_clicked()
{
    mapVisible = true;
    if(mapVisible){
        ui->mapPrint->show();
        ui->closeMapButton->show();
        std::string map = "        [c] --- [f] --- [j]  \n"
                          "         |               |   \n"
                          "         |               |   \n"
                          "[a] --- [b]             [k]  \n"
                          "         |               |   \n"
                          "         |               |   \n"
                          "        [d]              |   \n"
                          "         |               |   \n"
                          "         |               |   \n"
                          "        [e] --- [h] --- [i]  \n";

        QString mapQString = QString::fromStdString(map);
        ui->mapPrint->setText(mapQString);
    }
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


void MainWindow::on_closeMapButton_clicked()
{
    mapVisible = false;
    ui->mapPrint->hide();
    ui->closeMapButton->hide();

}

