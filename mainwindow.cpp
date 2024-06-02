#include "mainwindow.h"
#include "Inventory.h"
#include "exitwindow.h"
#include "ZorkUL.h"
#include "ui_mainwindow.h"
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
    QString description = QString::fromStdString(zork.getCurrentRoom()->getName());
    ui->TestText->setText(description);
}
void MainWindow::updateSpeech(){
    QString itemString = QString::fromStdString(zork.getCurrentRoom()->getDescription());
    ui->servantText->setPlainText(itemString);
}
void MainWindow::updateBackground() {
    int roomNumber = zork.getCurrentRoom()->getValue();
    QString bgImage = QString("C:/Users/23373326/MyRepos/Zorkers/%1.png").arg(roomNumber);
    QPixmap pix(bgImage);
    ui->bgLabel->setPixmap(pix);
    ui->bgLabel->lower();
    ui->servantText->show();
    ui->endingButton->setVisible(roomNumber == 12);
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
void MainWindow::move(const string& direction) {
    Room* nextRoom = zork.getCurrentRoom()->nextRoom(direction);
    if (nextRoom == nullptr) {
        openExitWindow();
    } else {
        zork.setCurrentRoom(nextRoom);
        zork.setCurrentItem(nextRoom->getItem());
        emit currentRoomChanged();
    }
}

void MainWindow::on_upButton_clicked() { move("north"); }
void MainWindow::on_rightButton_clicked() { move("east"); }
void MainWindow::on_downButton_clicked() { move("south"); }
void MainWindow::on_leftButton_clicked() { move("west"); }

void MainWindow::on_Inventory_clicked()
{
    hideUI();
    ui->closeInventory->show();
    QString bgImage = QString("C:/Users/23373326/MyRepos/Zorkers/item.png");
    QPixmap pix(bgImage);
    ui->bgLabel->setPixmap(pix);
    ui->bgLabel->lower();
    QString invString = QString::fromStdString(inventory.toString(inventory.getItemList()));
    ui->inventoryText->setText(invString);
    ui->inventoryText->show();
}

void MainWindow::on_closeInventory_clicked()
{
    showUI();
    updateBackground();
    ui->inventoryText->hide();
    ui->closeInventory->hide();
    takeItem();
}

void MainWindow::on_closeMapButton_clicked()
{
    showUI();
    updateBackground();
    takeItem();
    ui->closeMapButton->hide();
}

void MainWindow::itemNotify() {
    QString itemString = QString::fromStdString(Item("NaN", 19, "NaN").itemNotification(zork.getCurrentRoom()->getHasItem()));
    ui->itemNotification->setText(itemString);
}

void MainWindow::takeItem(){
    ui->itemTakeButton->setVisible(zork.getCurrentRoom()->getHasItem());
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
    showUI();
    if (Item* item = zork.getCurrentItem()) {
        inventory.addItem(item->getName(), item->getDescription(), zork.getCurrentRoom()->getName());
    }
    zork.setCurrentItem(nullptr);
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
    QString endText = QString::fromStdString(zork.getQuestionList()[endingCount]);
    ui->endingText->setPlainText(endText);
    ui->artistButton->show();
    ui->motherButton->show();
    ui->daughterButton->show();
}
void MainWindow::handleEnding(int correctIndex) {
    if (endingCount == correctIndex) successCount++;
    endingCount++;
    QString endText = QString::fromStdString(zork.getQuestionList()[endingCount]);
    ui->endingText->setPlainText(endText);
    endingScreen();
}

void MainWindow::on_artistButton_clicked() { handleEnding(2); }
void MainWindow::on_daughterButton_clicked() { handleEnding(1); }
void MainWindow::on_motherButton_clicked() { handleEnding(0); }

void MainWindow::endingScreen(){
    if(endingCount == 3){
        ui->artistButton->hide();
        ui->motherButton->hide();
        ui->daughterButton->hide();
        ui->finalText->show();
        QString bgImage = QString("C:/Users/23373326/MyRepos/Zorkers/final.png");
        QPixmap pix(bgImage);
        ui->bgLabel->setPixmap(pix);
        ui->bgLabel->lower();
        QString fText = QString::fromStdString(successCount == 3
        ? "YOU WON\n\nIt was indeed the Wife who killed the Artist and the Daughter who survived.\nWelcome back to Raya Lucaria, Master."
        : "YOU LOSE\n\nIt was actually the Wife who killed the Artist and the Daughter who survived.\nDepart from this house, and never return.");
        ui->finalText->setPlainText(fText);
    }
}

void MainWindow::setUI(){
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::updateRoomDescription);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::updateBackground);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::itemNotify);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::takeItem);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::updateSpeech);

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
    ui->endingButton->hide();
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
    exitWindow->noExit();
    exitWindow->show();
}
