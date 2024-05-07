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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(768, 619);
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
        TestText->setGeometry(QRect(270, 10, 231, 41));
        itemNotification = new QTextEdit(centralwidget);
        itemNotification->setObjectName("itemNotification");
        itemNotification->setGeometry(QRect(50, 534, 241, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 768, 17));
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
        Inventory->setText(QCoreApplication::translate("MainWindow", "Inventory", nullptr));
        mapButton->setText(QCoreApplication::translate("MainWindow", "MAP", nullptr));
        downButton->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
        leftButton->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        upButton->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        rightButton->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        closeMapButton->setText(QCoreApplication::translate("MainWindow", "Hide Map", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
