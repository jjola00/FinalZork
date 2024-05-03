#include "mainwindow.h"
#include "ZorkUL.h"
#include "ui_mainwindow.h"

using namespace std;
ZorkUL zork;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    mapVisible = false;
    ui->setupUi(this);

    connect(ui->mapButton, &QPushButton::clicked, this, &MainWindow::on_mapButton_clicked);
    connect(ui->closeMapButton, &QPushButton::clicked, this, &MainWindow::on_closeMapButton_clicked);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::updateRoomDescription);

    ui->mapPrint->hide();
    ui->closeMapButton->hide();
}
void MainWindow::updateRoomDescription() {
    ui->TestText->isReadOnly();
    std::string name = zork.getCurrentRoom()->getDescription();
    QString description = QString::fromStdString(name);
    ui->TestText->setText(description);
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
    direction = "north";
    Room* nextRoom = zork.getCurrentRoom()->nextRoom(direction);
    if (nextRoom == NULL)
        cout << ("direction null");
    else
    {
        zork.setCurrentRoom(nextRoom);
        emit currentRoomChanged();

    }
}


void MainWindow::on_rightButton_clicked()
{
    direction = "east";
    Room* nextRoom = zork.getCurrentRoom()->nextRoom(direction);
    if (nextRoom == NULL)
        cout << ("direction null");
    else
    {
        zork.setCurrentRoom(nextRoom);
        emit currentRoomChanged();


    }
}


void MainWindow::on_downButton_clicked()
{
    direction = "south";
    Room* nextRoom = zork.getCurrentRoom()->nextRoom(direction);
    if (nextRoom == NULL)
        cout << ("direction null");
    else
    {
        zork.setCurrentRoom(nextRoom);
        emit currentRoomChanged();

    }
}


void MainWindow::on_leftButton_clicked()
{
    direction = "west";
    Room* nextRoom = zork.getCurrentRoom()->nextRoom(direction);
    if (nextRoom == NULL)
        cout << ("direction null");
    else
    {
        zork.setCurrentRoom(nextRoom);
        emit currentRoomChanged();

    }
}

void MainWindow::on_closeMapButton_clicked()
{
    mapVisible = false;
    ui->mapPrint->hide();
    ui->closeMapButton->hide();

}

