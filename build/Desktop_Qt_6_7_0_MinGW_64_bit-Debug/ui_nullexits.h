/********************************************************************************
** Form generated from reading UI file 'nullexits.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NULLEXITS_H
#define UI_NULLEXITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NullExits
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *NullExits)
    {
        if (NullExits->objectName().isEmpty())
            NullExits->setObjectName("NullExits");
        NullExits->resize(400, 300);
        pushButton = new QPushButton(NullExits);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 240, 101, 31));

        retranslateUi(NullExits);

        QMetaObject::connectSlotsByName(NullExits);
    } // setupUi

    void retranslateUi(QDialog *NullExits)
    {
        NullExits->setWindowTitle(QCoreApplication::translate("NullExits", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("NullExits", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NullExits: public Ui_NullExits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NULLEXITS_H
