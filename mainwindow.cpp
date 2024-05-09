#include "mainwindow.h"
#include "Inventory.h"
#include "ZorkUL.h"
#include "servant.h"
#include "ui_mainwindow.h"
#include <iostream>

using namespace std;
ZorkUL zork;
Inventory inventory;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setUI();
}
void MainWindow::createRooms()
{
    zork.createRooms();
}
void MainWindow::updateRoomDescription() {
    std::string name = zork.getCurrentRoom()->getDescription();
    QString description = QString::fromStdString(name);
    ui->TestText->setText(description);
}

void MainWindow::updateBackground() {
    int roomNumber = zork.getCurrentRoom()->getRoomNumber();
    Servant servant("James", "Tall and quiet");
    string speech = servant.speak(roomNumber);
    QString itemString = QString::fromStdString(speech);
    ui->servantText->setText(itemString);

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
    hideUI();
    ui->closeMapButton->show();

    QString bgImage = QString("C:/Users/23373326/MyRepos/Zorkers/map.jpg");
    QString styleSheet = QString("background-image: url(%1);").arg(bgImage);
    this->setStyleSheet(styleSheet);
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
        Item* item = nextRoom->getItem();
        zork.setCurrentItem(item);
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
        Item* item = nextRoom->getItem();
        zork.setCurrentItem(item);
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
        Item* item = nextRoom->getItem();
        zork.setCurrentItem(item);
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
        Item* item = nextRoom->getItem();
        zork.setCurrentItem(item);
        emit currentRoomChanged();
    }
}

void MainWindow::on_Inventory_clicked()
{
    ui->closeInventory->show();
    hideUI();
    QString bgImage = QString("C:/Users/23373326/MyRepos/Zorkers/item.png");
    QString styleSheet = QString("background-image: url(%1);").arg(bgImage);
    this->setStyleSheet(styleSheet);
    ui->inventoryText->show();
    string inventoryString = inventory.toString(inventory.getItemList());
    QString invString = QString::fromStdString(inventoryString);
    ui->inventoryText->setText(invString);
}

void MainWindow::on_closeInventory_clicked()
{
    showUI();
    ui->inventoryText->hide();
    takeItem();
    ui->closeInventory->hide();
}

void MainWindow::on_closeMapButton_clicked()
{
    showUI();
    takeItem();
    ui->closeMapButton->hide();
}

void MainWindow::itemNotify() {
    int x;
    Item item("NaN", 19, "NaN");
    if (zork.getCurrentRoom()->getHasItem() == true) {
         x = 1;
    } else {
        x = 0;
    }
    string itemNoti = item.itemNotification(x);
    QString itemString = QString::fromStdString(itemNoti);
    ui->itemNotification->setText(itemString);
}

void MainWindow::takeItem(){
    if(zork.getCurrentRoom()->getHasItem() == true){
        ui->itemTakeButton->show();
    }
    else{
        ui->itemTakeButton->hide();
    }
}

void MainWindow::on_itemTakeButton_clicked()
{
    zork.getCurrentRoom()->setHasItem(false);
    itemNotify();
    hideUI();
    ui->closeMapButton->hide();
    ui->addToInventoryButton->show();

    Item* currentItem = zork.getCurrentItem();
    if (currentItem != nullptr) {
        QString bgImage = QString("C:/Users/23373326/MyRepos/Zorkers/Painting%1.png").arg(currentItem->getValue());
        QString styleSheet = QString("background-image: url(%1);").arg(bgImage);
        this->setStyleSheet(styleSheet);
    }
}

void MainWindow::on_addToInventoryButton_clicked()
{
    string description = zork.getCurrentItem()->getDescription();
    string longDescription = zork.getCurrentItem()->getLongDescription();
    string roomName = zork.getCurrentRoom()->getDescription();
    inventory.addItem(description, longDescription, roomName);
    showUI();
    takeItem();
    zork.setCurrentItem(nullptr);
    ui->addToInventoryButton->hide();
}

void MainWindow::setUI(){
    connect(ui->mapButton, &QPushButton::clicked, this, &MainWindow::on_mapButton_clicked);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::updateRoomDescription);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::updateBackground);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::itemNotify);
    connect(ui->closeMapButton, &QPushButton::clicked, this, &MainWindow::on_closeMapButton_clicked);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::takeItem);

    QString arrowStyleSheet = "QPushButton { color: white; }";
    ui->upButton->setStyleSheet(arrowStyleSheet);
    ui->downButton->setStyleSheet(arrowStyleSheet);
    ui->leftButton->setStyleSheet(arrowStyleSheet);
    ui->rightButton->setStyleSheet(arrowStyleSheet);
    ui->mapButton->setStyleSheet(arrowStyleSheet);
    ui->Inventory->setStyleSheet(arrowStyleSheet);
    ui->closeMapButton->setStyleSheet(arrowStyleSheet);
    ui->itemTakeButton->setStyleSheet(arrowStyleSheet);
    ui->addToInventoryButton->setStyleSheet(arrowStyleSheet);
    ui->closeInventory->setStyleSheet(arrowStyleSheet);

    ui->closeMapButton->hide();
    ui->itemTakeButton->hide();
    ui->addToInventoryButton->hide();
    ui->closeInventory->hide();
    ui->inventoryText->hide();

    ui->TestText->setReadOnly(true);
    ui->servantText->setReadOnly(true);
    ui->itemNotification->setReadOnly(true);
    ui->inventoryText->setReadOnly(true);


    ui->TestText->setStyleSheet("color: white; font-family: STLiti; font-size: 19pt;");
    ui->inventoryText->setStyleSheet("color: white; font-family: STLiti; font-size: 19pt");
    ui->servantText->setStyleSheet("color: white; font-family: Bell MT; font-size: 13pt");
    ui->itemNotification->setStyleSheet("color: white; font-family: Bell MT; font-size: 13pt");

    ui->TestText->setFrameStyle(QFrame::NoFrame);
    ui->servantText->setFrameStyle(QFrame::NoFrame);
    ui->inventoryText->setFrameStyle(QFrame::NoFrame);
    ui->itemNotification->setFrameStyle(QFrame::NoFrame);

    updateBackground();
}

void MainWindow::hideUI(){
    ui->upButton->hide();
    ui->leftButton->hide();
    ui->rightButton->hide();
    ui->downButton->hide();
    ui->Inventory->hide();
    ui->TestText->hide();
    ui->itemNotification->hide();
    ui->mapButton->hide();
    ui->itemTakeButton->hide();
}

void MainWindow::showUI(){
    ui->upButton->show();
    ui->leftButton->show();
    ui->rightButton->show();
    ui->downButton->show();
    ui->Inventory->show();
    ui->TestText->show();
    ui->mapButton->show();
    ui->itemNotification->show();
    ui->itemTakeButton->show();
    updateBackground();
}

