/********************************************************************************
** Form generated from reading UI file 'calculation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATION_H
#define UI_CALCULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_calculation
{
public:
    QLabel *label;
    QTableView *tableView;
    QPushButton *expor;

    void setupUi(QDialog *calculation)
    {
        if (calculation->objectName().isEmpty())
            calculation->setObjectName(QString::fromUtf8("calculation"));
        calculation->resize(791, 578);
        label = new QLabel(calculation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 531, 91));
        tableView = new QTableView(calculation);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 90, 731, 401));
        expor = new QPushButton(calculation);
        expor->setObjectName(QString::fromUtf8("expor"));
        expor->setGeometry(QRect(608, 34, 151, 41));

        retranslateUi(calculation);

        QMetaObject::connectSlotsByName(calculation);
    } // setupUi

    void retranslateUi(QDialog *calculation)
    {
        calculation->setWindowTitle(QApplication::translate("calculation", "Dialog", nullptr));
        label->setText(QApplication::translate("calculation", "Subnet Name, Network Address, Subnet Mask, IP Range, Broadcast Address", nullptr));
        expor->setText(QApplication::translate("calculation", "Export CSV", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculation: public Ui_calculation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATION_H
