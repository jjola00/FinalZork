#include "mainwindow.h"
#include "Inventory.h"
#include "exitwindow.h"
#include "ZorkUL.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QPixmap>
#include <QWidget>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QTimer>
#include <QtDebug>

using namespace std;
ZorkUL zork;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , exitWindow(new ExitWindow(this))
{
    ui->setupUi(this);
    setUI();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete exitWindow;
}

void MainWindow::updateRoomDescription() {
    std::string name = zork.getCurrentRoom()->getName();
    QString description = QString::fromStdString(name);
    ui->TestText->setText(description);
}
void MainWindow::updateSpeech(){
    ui->servantText->clear();
    std::string speech = zork.getCurrentRoom()->getDescription();
    QString itemString = QString::fromStdString(speech);
    ui->servantText->setPlainText(itemString);
}
void MainWindow::updateBackground() {
    int roomNumber = zork.getCurrentRoom()->getValue();
    QString bgImage = QString("C:/Users/23373326/MyRepos/Zorkers/%1.png").arg(roomNumber);
    QPixmap pix(bgImage);
    ui->bgLabel->setPixmap(pix);
    ui->bgLabel->lower();
    ui->servantText->show();
    if(roomNumber == 12)ui->endingButton->show();
}

void MainWindow::on_mapButton_clicked()
{
    hideUI();
    ui->closeMapButton->show();

    QString bgImage = QString("C:/Users/23373326/MyRepos/Zorkers/map.jpg");
    QPixmap pix(bgImage);
    ui->bgLabel->setPixmap(pix);
    ui->bgLabel->lower();
}

void MainWindow::on_upButton_clicked()
{
    direction = "north";
    Room* nextRoom = zork.getCurrentRoom()->nextRoom(direction);
    if (nextRoom == NULL){
        openExitWindow();
        cout << ("direction null");
    }
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
    if (nextRoom == NULL){
        openExitWindow();
        cout << ("direction null");
    }
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
    if (nextRoom == NULL){
        openExitWindow();
        cout << ("direction null");
    }
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
    if (nextRoom == NULL){
        openExitWindow();
        cout << ("direction null");
    }
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
    QPixmap pix(bgImage);
    ui->bgLabel->setPixmap(pix);
    ui->bgLabel->lower();

    string inventoryString = inventory.toString(inventory.getItemList());
    QString invString = QString::fromStdString(inventoryString);
    ui->inventoryText->setText(invString);
    ui->inventoryText->show();
}

void MainWindow::on_closeInventory_clicked()
{
    updateBackground();
    ui->inventoryText->hide();
    ui->closeInventory->hide();
    showUI();
    takeItem();
}

void MainWindow::on_closeMapButton_clicked()
{
    updateBackground();
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
        QPixmap pix(bgImage);
        ui->bgLabel->setPixmap(pix);
        ui->bgLabel->lower();
    }
}

void MainWindow::on_addToInventoryButton_clicked()
{
    string description = zork.getCurrentItem()->getName();
    string longDescription = zork.getCurrentItem()->getDescription();
    string roomName = zork.getCurrentRoom()->getName();
    inventory.addItem(description, longDescription, roomName);
    zork.setCurrentItem(nullptr);

    showUI();
    ui->itemTakeButton->hide();
    updateBackground();
    ui->addToInventoryButton->hide();
}

void MainWindow::on_endingButton_clicked()
{
    hideUI();
    QString bgImage = QString("C:/Users/23373326/MyRepos/Zorkers/ending.png");
    QPixmap pix(bgImage);
    ui->bgLabel->setPixmap(pix);
    ui->bgLabel->lower();
    ui->endingButton->hide();
    ui->endingText->show();
    string* text = zork.getQuestionList();
    QString endText = QString::fromStdString(text[endingCount]);
    ui->endingText->setPlainText(endText);
    ui->artistButton->show();
    ui->motherButton->show();
    ui->daughterButton->show();
}

void MainWindow::on_artistButton_clicked()
{
    if(endingCount == 2)successCount++;
    endingCount++;
    ui->artistButton->hide();
    string* text = zork.getQuestionList();
    QString endText = QString::fromStdString(text[endingCount]);
    ui->endingText->setPlainText(endText);
    endingScreen();
}


void MainWindow::on_daughterButton_clicked()
{
    if(endingCount == 1)successCount++;
    endingCount++;
    ui->daughterButton->hide();
    string* text = zork.getQuestionList();
    QString endText = QString::fromStdString(text[endingCount]);
    ui->endingText->setPlainText(endText);
    endingScreen();
}


void MainWindow::on_motherButton_clicked()
{
    if(endingCount == 0)successCount++;
    endingCount++;
    ui->motherButton->hide();
    string* text = zork.getQuestionList();
    QString endText = QString::fromStdString(text[endingCount]);
    ui->endingText->setPlainText(endText);
    endingScreen();
}

void MainWindow::endingScreen(){
    QString fText;
    if(endingCount == 3){
        ui->finalText->show();
        QString bgImage = QString("C:/Users/23373326/MyRepos/Zorkers/final.png");
        QPixmap pix(bgImage);
        ui->bgLabel->setPixmap(pix);
        ui->bgLabel->lower();

    if(successCount == 3){
        fText = QString::fromStdString("YOU WON");
    }
    else{
         fText = QString::fromStdString("YOU LOSE");
    }
    ui->finalText->setPlainText(fText);
    }
}

void MainWindow::setUI(){
    connect(ui->mapButton, &QPushButton::clicked, this, &MainWindow::on_mapButton_clicked);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::updateRoomDescription);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::updateBackground);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::itemNotify);
    connect(ui->closeMapButton, &QPushButton::clicked, this, &MainWindow::on_closeMapButton_clicked);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::takeItem);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::updateSpeech);

    QString arrowStyleSheet = "QPushButton { background-color: black; color: white; font-family: "
                              "Bell MT; font-size: 10pt; font-weight: bold; }";
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
    ui->blackScreen->hide();
    ui->endingButton->hide();
    ui->endingText->hide();
    ui->artistButton->hide();
    ui->motherButton->hide();
    ui->daughterButton->hide();
    ui->finalText->hide();

    ui->TestText->setReadOnly(true);
    ui->servantText->setReadOnly(true);
    ui->itemNotification->setReadOnly(true);
    ui->inventoryText->setReadOnly(true);
    ui->blackScreen->setReadOnly(true);
    ui->endingText->setReadOnly(true);
    ui->finalText->setReadOnly(true);

    ui->TestText->setStyleSheet("background-color: transparent; color: white; font-family: STLiti; font-size: 23pt; border: none;");
    ui->inventoryText->setStyleSheet("background-color: transparent; color: white; font-family: STLiti; font-size: 19pt; border: none;");
    ui->servantText->setStyleSheet("background-color: black; color: cyan; font-family: Courier; font-size: 9pt; border: none;");
    ui->itemNotification->setStyleSheet("background-color: transparent; color: white; font-family: Bell MT; font-size: 13pt; border: none;");
    ui->endingText->setStyleSheet("background-color: transparent; color: white; font-family: STLiti; font-size: 23pt; border: none;");
    ui->finalText->setStyleSheet("background-color: transparent; color: white; font-family: STLiti; font-size: 23pt; border: none;");
    ui->blackScreen->setStyleSheet("background-color: black; border: none;");

    ui->servantText->lower();

    updateBackground();
    updateSpeech();
    updateRoomDescription();
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
    ui->servantText->hide();
    ui->blackScreen->show();
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
    ui->servantText->show();
    ui->blackScreen->hide();
}

void MainWindow::openExitWindow(){
    exitWindow = new ExitWindow(this);
    exitWindow->printExits();
    exitWindow->show();
}
