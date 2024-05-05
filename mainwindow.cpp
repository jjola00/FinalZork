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
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::updateBackground);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::itemNotify);


    QString arrowStyleSheet = "QPushButton { color: white; }";
    ui->upButton->setStyleSheet(arrowStyleSheet);
    ui->downButton->setStyleSheet(arrowStyleSheet);
    ui->leftButton->setStyleSheet(arrowStyleSheet);
    ui->rightButton->setStyleSheet(arrowStyleSheet);
    ui->mapButton->setStyleSheet(arrowStyleSheet);
    ui->Inventory->setStyleSheet(arrowStyleSheet);
    ui->closeMapButton->setStyleSheet(arrowStyleSheet);

    ui->mapPrint->hide();
    ui->closeMapButton->hide();
}
void MainWindow::updateRoomDescription() {
    ui->TestText->isReadOnly();
    std::string name = zork.getCurrentRoom()->getDescription();
    QString description = QString::fromStdString(name);
    ui->TestText->setText(description);
    ui->TestText->setStyleSheet("color: white;");
}

void MainWindow::updateBackground() {
    int roomNumber = zork.getCurrentRoom()->getRoomNumber(); // Assuming getRoomNumber() returns the room number
    QString bgImage = QString("C:/Users/23373326/MyRepos/Zorkers/%1.png").arg(roomNumber);
    QString styleSheet = QString("background-image: url(%1);").arg(bgImage);
    this->setStyleSheet(styleSheet);
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
        ui->mapPrint->setStyleSheet("color: white;");
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
void MainWindow::itemNotify() {
    Item item("NaN", 19);
    RoomItem roomItem("NaN",20);
    std::string itemNoti;
    int x = zork.getCurrentRoom()->getRoomNumber();
    if (x == 2 || x == 5 || x == 7 || x == 11) {
        itemNoti = roomItem.itemNotification();
    } else {
        itemNoti = item.itemNotification();
    }
    QString itemString = QString::fromStdString(itemNoti);
    ui->itemNotification->setStyleSheet("color: white;");
    ui->itemNotification->setText(itemString);
    ui->itemNotification->show();
}

