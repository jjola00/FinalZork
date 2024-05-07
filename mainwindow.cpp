#include "mainwindow.h"
#include "ZorkUL.h"
#include "ui_mainwindow.h"

using namespace std;
ZorkUL zork;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setUI();
}
void MainWindow::updateRoomDescription() {
    std::string name = zork.getCurrentRoom()->getDescription();
    QString description = QString::fromStdString(name);
    ui->TestText->setText(description);

}

void MainWindow::updateBackground() {
    int roomNumber = zork.getCurrentRoom()->getRoomNumber();
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
    ui->upButton->hide();
    ui->leftButton->hide();
    ui->rightButton->hide();
    ui->downButton->hide();
    ui->Inventory->hide();
    ui->TestText->hide();
    ui->itemNotification->hide();
    ui->closeMapButton->show();
    ui->mapButton->hide();

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
    ui->upButton->show();
    ui->leftButton->show();
    ui->rightButton->show();
    ui->downButton->show();
    ui->Inventory->show();
    ui->TestText->show();
    ui->mapButton->show();
    ui->itemNotification->show();
    ui->closeMapButton->hide();
    updateBackground();
}
void MainWindow::itemNotify() {
    Item item("NaN", 19, "NaN");
    RoomItem roomItem("NaN",20, "NaN");
    std::string itemNoti;
    int x = zork.getCurrentRoom()->getRoomNumber();
    if (x == 2 || x == 5 || x == 7 || x == 11) {
        itemNoti = roomItem.itemNotification();
    } else {
        itemNoti = item.itemNotification();
    }
    QString itemString = QString::fromStdString(itemNoti);
    ui->itemNotification->setStyleSheet("color: white; font-family: Bell MT");
    ui->itemNotification->setText(itemString);
    ui->itemNotification->show();
}
void MainWindow::setUI(){
    connect(ui->mapButton, &QPushButton::clicked, this, &MainWindow::on_mapButton_clicked);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::updateRoomDescription);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::updateBackground);
    connect(this, &MainWindow::currentRoomChanged, this, &MainWindow::itemNotify);
    connect(ui->closeMapButton, &QPushButton::clicked, this, [=]() {
        this->setStyleSheet("");
    });
    connect(ui->closeMapButton, &QPushButton::clicked, this, &MainWindow::on_closeMapButton_clicked);


    QString arrowStyleSheet = "QPushButton { color: white; }";
    ui->upButton->setStyleSheet(arrowStyleSheet);
    ui->downButton->setStyleSheet(arrowStyleSheet);
    ui->leftButton->setStyleSheet(arrowStyleSheet);
    ui->rightButton->setStyleSheet(arrowStyleSheet);
    ui->mapButton->setStyleSheet(arrowStyleSheet);
    ui->Inventory->setStyleSheet(arrowStyleSheet);
    ui->closeMapButton->setStyleSheet(arrowStyleSheet);

    ui->closeMapButton->hide();

    ui->TestText->setReadOnly(true);
    ui->itemNotification->setReadOnly(true);

    ui->TestText->setStyleSheet("color: white; font-family: STLiti; font-size: 19pt");

    ui->TestText->setFrameStyle(QFrame::NoFrame);
    ui->itemNotification->setFrameStyle(QFrame::NoFrame);

    updateBackground();
}

