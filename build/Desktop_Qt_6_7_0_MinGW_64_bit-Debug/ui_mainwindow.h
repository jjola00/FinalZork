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
    QTextEdit *blackScreen;
    QPushButton *endingButton;
    QPushButton *artistButton;
    QPushButton *daughterButton;
    QPushButton *motherButton;
    QTextEdit *endingText;
    QTextEdit *finalText;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1012, 614);
        MainWindow->setWindowOpacity(1.000000000000000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Inventory = new QPushButton(centralwidget);
        Inventory->setObjectName("Inventory");
        Inventory->setGeometry(QRect(10, 10, 101, 41));
        Inventory->setStyleSheet(QString::fromUtf8("background-color: black; \n"
"font: 10pt \"Bell MT\";\n"
"color: white; \n"
"font-weight: bold;"));
        mapButton = new QPushButton(centralwidget);
        mapButton->setObjectName("mapButton");
        mapButton->setGeometry(QRect(860, 410, 61, 51));
        mapButton->setStyleSheet(QString::fromUtf8("background-color: black; \n"
"font: 10pt \"Bell MT\";\n"
"color: white; \n"
"font-weight: bold;"));
        downButton = new QPushButton(centralwidget);
        downButton->setObjectName("downButton");
        downButton->setGeometry(QRect(860, 470, 61, 51));
        downButton->setStyleSheet(QString::fromUtf8("background-color: black; \n"
"font: 10pt \"Bell MT\";\n"
"color: white; \n"
"font-weight: bold;"));
        leftButton = new QPushButton(centralwidget);
        leftButton->setObjectName("leftButton");
        leftButton->setGeometry(QRect(790, 410, 61, 51));
        leftButton->setStyleSheet(QString::fromUtf8("background-color: black; \n"
"font: 10pt \"Bell MT\";\n"
"color: white; \n"
"font-weight: bold;"));
        upButton = new QPushButton(centralwidget);
        upButton->setObjectName("upButton");
        upButton->setGeometry(QRect(860, 350, 61, 51));
        upButton->setStyleSheet(QString::fromUtf8("background-color: black; \n"
"font: 10pt \"Bell MT\";\n"
"color: white; \n"
"font-weight: bold;"));
        rightButton = new QPushButton(centralwidget);
        rightButton->setObjectName("rightButton");
        rightButton->setGeometry(QRect(930, 410, 61, 51));
        rightButton->setStyleSheet(QString::fromUtf8("background-color: black; \n"
"font: 10pt \"Bell MT\";\n"
"color: white; \n"
"font-weight: bold;"));
        closeMapButton = new QPushButton(centralwidget);
        closeMapButton->setObjectName("closeMapButton");
        closeMapButton->setGeometry(QRect(669, 14, 81, 31));
        closeMapButton->setStyleSheet(QString::fromUtf8("background-color: black; \n"
"font: 10pt \"Bell MT\";\n"
"color: white; \n"
"font-weight: bold;"));
        TestText = new QTextEdit(centralwidget);
        TestText->setObjectName("TestText");
        TestText->setGeometry(QRect(20, 511, 381, 51));
        TestText->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
" color: white;\n"
"font: 23pt \"STLiti\";\n"
"border: none;"));
        TestText->setReadOnly(true);
        itemNotification = new QTextEdit(centralwidget);
        itemNotification->setObjectName("itemNotification");
        itemNotification->setGeometry(QRect(10, 314, 261, 31));
        itemNotification->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
" color: white;\n"
"font: 15pt \"STLiti\";\n"
"border: none;"));
        itemNotification->setReadOnly(true);
        itemTakeButton = new QPushButton(centralwidget);
        itemTakeButton->setObjectName("itemTakeButton");
        itemTakeButton->setGeometry(QRect(619, 10, 111, 41));
        itemTakeButton->setStyleSheet(QString::fromUtf8("background-color: black; \n"
"font: 10pt \"Bell MT\";\n"
"color: white; \n"
"font-weight: bold;"));
        addToInventoryButton = new QPushButton(centralwidget);
        addToInventoryButton->setObjectName("addToInventoryButton");
        addToInventoryButton->setGeometry(QRect(640, 10, 121, 41));
        addToInventoryButton->setStyleSheet(QString::fromUtf8("background-color: black; \n"
"font: 10pt \"Bell MT\";\n"
"color: white; \n"
"font-weight: bold;"));
        closeInventory = new QPushButton(centralwidget);
        closeInventory->setObjectName("closeInventory");
        closeInventory->setGeometry(QRect(10, 10, 101, 41));
        closeInventory->setStyleSheet(QString::fromUtf8("background-color: black; \n"
"font: 10pt \"Bell MT\";\n"
"color: white; \n"
"font-weight: bold;"));
        inventoryText = new QTextEdit(centralwidget);
        inventoryText->setObjectName("inventoryText");
        inventoryText->setGeometry(QRect(170, 10, 591, 561));
        inventoryText->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
" color: white;\n"
"font: 23pt \"STLiti\";\n"
"border: none;"));
        inventoryText->setReadOnly(true);
        servantText = new QTextBrowser(centralwidget);
        servantText->setObjectName("servantText");
        servantText->setGeometry(QRect(760, 1, 255, 599));
        servantText->setStyleSheet(QString::fromUtf8("background-color: black; color: cyan; font-family: Courier; font-size: 9pt; border: none;"));
        bgLabel = new QLabel(centralwidget);
        bgLabel->setObjectName("bgLabel");
        bgLabel->setGeometry(QRect(-4, -4, 771, 611));
        blackScreen = new QTextEdit(centralwidget);
        blackScreen->setObjectName("blackScreen");
        blackScreen->setGeometry(QRect(760, 1, 261, 599));
        blackScreen->setStyleSheet(QString::fromUtf8("background-color: black; border: none;"));
        endingButton = new QPushButton(centralwidget);
        endingButton->setObjectName("endingButton");
        endingButton->setGeometry(QRect(260, 260, 211, 61));
        endingButton->setStyleSheet(QString::fromUtf8("background-color: black; \n"
"font: 10pt \"Bell MT\";\n"
"color: white; \n"
"font-weight: bold;"));
        artistButton = new QPushButton(centralwidget);
        artistButton->setObjectName("artistButton");
        artistButton->setGeometry(QRect(110, 470, 91, 31));
        artistButton->setStyleSheet(QString::fromUtf8("background-color: black; \n"
"font: 10pt \"Bell MT\";\n"
"color: white; \n"
"font-weight: bold;"));
        daughterButton = new QPushButton(centralwidget);
        daughterButton->setObjectName("daughterButton");
        daughterButton->setGeometry(QRect(320, 470, 91, 31));
        daughterButton->setStyleSheet(QString::fromUtf8("background-color: black; \n"
"font: 10pt \"Bell MT\";\n"
"color: white; \n"
"font-weight: bold;"));
        motherButton = new QPushButton(centralwidget);
        motherButton->setObjectName("motherButton");
        motherButton->setGeometry(QRect(540, 470, 91, 31));
        motherButton->setStyleSheet(QString::fromUtf8("background-color: black; \n"
"font: 10pt \"Bell MT\";\n"
"color: white; \n"
"font-weight: bold;"));
        endingText = new QTextEdit(centralwidget);
        endingText->setObjectName("endingText");
        endingText->setGeometry(QRect(170, 150, 441, 151));
        endingText->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
" color: white;\n"
"font: 23pt \"STLiti\";\n"
"border: none;"));
        endingText->setReadOnly(true);
        finalText = new QTextEdit(centralwidget);
        finalText->setObjectName("finalText");
        finalText->setGeometry(QRect(170, 150, 441, 281));
        finalText->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
" color: white;\n"
"font: 23pt \"STLiti\";\n"
"border: none;"));
        finalText->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1012, 17));
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
        endingButton->setText(QCoreApplication::translate("MainWindow", "Proceed.", nullptr));
        artistButton->setText(QCoreApplication::translate("MainWindow", "The Artist", nullptr));
        daughterButton->setText(QCoreApplication::translate("MainWindow", "The Daughter", nullptr));
        motherButton->setText(QCoreApplication::translate("MainWindow", "The Mother", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
