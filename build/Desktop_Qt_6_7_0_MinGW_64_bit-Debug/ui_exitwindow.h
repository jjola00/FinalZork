/********************************************************************************
** Form generated from reading UI file 'exitwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITWINDOW_H
#define UI_EXITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ExitWindow
{
public:
    QTextEdit *exitText;
    QLabel *exitBg;

    void setupUi(QDialog *ExitWindow)
    {
        if (ExitWindow->objectName().isEmpty())
            ExitWindow->setObjectName("ExitWindow");
        ExitWindow->resize(400, 300);
        exitText = new QTextEdit(ExitWindow);
        exitText->setObjectName("exitText");
        exitText->setGeometry(QRect(70, 120, 321, 111));
        exitBg = new QLabel(ExitWindow);
        exitBg->setObjectName("exitBg");
        exitBg->setGeometry(QRect(0, 0, 401, 301));

        retranslateUi(ExitWindow);

        QMetaObject::connectSlotsByName(ExitWindow);
    } // setupUi

    void retranslateUi(QDialog *ExitWindow)
    {
        ExitWindow->setWindowTitle(QCoreApplication::translate("ExitWindow", "Dialog", nullptr));
        exitBg->setText(QCoreApplication::translate("ExitWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExitWindow: public Ui_ExitWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITWINDOW_H
