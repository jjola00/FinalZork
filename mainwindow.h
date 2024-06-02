#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Inventory.h"
#include "exitwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

using namespace std;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString UserInput();

private slots:
    void on_mapButton_clicked();

    void on_upButton_clicked();

    void on_rightButton_clicked();

    void on_downButton_clicked();

    void on_leftButton_clicked();

    void on_closeMapButton_clicked();

    void updateRoomDescription();

    void updateBackground();

    void itemNotify();

    void takeItem();

    void on_itemTakeButton_clicked();

    void setUI();

    void hideUI();

    void showUI();

    void on_addToInventoryButton_clicked();

    void on_Inventory_clicked();

    void on_closeInventory_clicked();

    void updateSpeech();

    void on_endingButton_clicked();

    void on_artistButton_clicked();

    void on_daughterButton_clicked();

    void on_motherButton_clicked();

    void endingScreen();

    void openExitWindow();

    void move(const string& direction);

    void handleEnding(int correctIndex);
signals:
    void currentRoomChanged();

private:
    string direction;
    Inventory inventory;
    Ui::MainWindow *ui;
    ExitWindow *exitWindow;
    int endingCount = 0;
    int successCount = 0;
};

#endif // MAINWINDOW_H
