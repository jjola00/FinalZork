/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Inventory;
    QPushButton *mapButton;
    QPushButton *downButton;
    QPushButton *leftButton;
    QPushButton *upButton;
    QPushButton *rightButton;
    QPushButton *closeMapButton;
    QTextEdit *TestText;
    QTextEdit *itemNotification;
    QPushButton *itemTakeButton;
    QPushButton *addToInventoryButton;
    QPushButton *closeInventory;
    QTextEdit *inventoryText;
    QTextBrowser *servantText;
    QLabel *bgLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(761, 614);
        MainWindow->setWindowOpacity(1.000000000000000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Inventory = new QPushButton(centralwidget);
        Inventory->setObjectName("Inventory");
        Inventory->setGeometry(QRect(10, 10, 101, 41));
        mapButton = new QPushButton(centralwidget);
        mapButton->setObjectName("mapButton");
        mapButton->setGeometry(QRect(550, 410, 61, 51));
        downButton = new QPushButton(centralwidget);
        downButton->setObjectName("downButton");
        downButton->setGeometry(QRect(550, 470, 61, 51));
        leftButton = new QPushButton(centralwidget);
        leftButton->setObjectName("leftButton");
        leftButton->setGeometry(QRect(470, 410, 61, 51));
        upButton = new QPushButton(centralwidget);
        upButton->setObjectName("upButton");
        upButton->setGeometry(QRect(550, 350, 61, 51));
        rightButton = new QPushButton(centralwidget);
        rightButton->setObjectName("rightButton");
        rightButton->setGeometry(QRect(630, 410, 61, 51));
        closeMapButton = new QPushButton(centralwidget);
        closeMapButton->setObjectName("closeMapButton");
        closeMapButton->setGeometry(QRect(680, 10, 80, 21));
        TestText = new QTextEdit(centralwidget);
        TestText->setObjectName("TestText");
        TestText->setGeometry(QRect(20, 511, 381, 51));
        itemNotification = new QTextEdit(centralwidget);
        itemNotification->setObjectName("itemNotification");
        itemNotification->setGeometry(QRect(10, 314, 261, 31));
        itemTakeButton = new QPushButton(centralwidget);
        itemTakeButton->setObjectName("itemTakeButton");
        itemTakeButton->setGeometry(QRect(619, 10, 111, 41));
        addToInventoryButton = new QPushButton(centralwidget);
        addToInventoryButton->setObjectName("addToInventoryButton");
        addToInventoryButton->setGeometry(QRect(640, 10, 121, 41));
        closeInventory = new QPushButton(centralwidget);
        closeInventory->setObjectName("closeInventory");
        closeInventory->setGeometry(QRect(10, 10, 101, 41));
        inventoryText = new QTextEdit(centralwidget);
        inventoryText->setObjectName("inventoryText");
        inventoryText->setGeometry(QRect(170, 10, 591, 561));
        servantText = new QTextBrowser(centralwidget);
        servantText->setObjectName("servantText");
        servantText->setGeometry(QRect(0, 80, 381, 221));
        bgLabel = new QLabel(centralwidget);
        bgLabel->setObjectName("bgLabel");
        bgLabel->setGeometry(QRect(-4, -1, 771, 611));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 761, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Inventory->setText(QCoreApplication::translate("MainWindow", "Open Inventory", nullptr));
        mapButton->setText(QCoreApplication::translate("MainWindow", "MAP", nullptr));
        downButton->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
        leftButton->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        upButton->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        rightButton->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        closeMapButton->setText(QCoreApplication::translate("MainWindow", "Hide Map", nullptr));
        itemTakeButton->setText(QCoreApplication::translate("MainWindow", "Take The Painting.", nullptr));
        addToInventoryButton->setText(QCoreApplication::translate("MainWindow", "Add to Inventory", nullptr));
        closeInventory->setText(QCoreApplication::translate("MainWindow", "Close Inventory", nullptr));
        bgLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
