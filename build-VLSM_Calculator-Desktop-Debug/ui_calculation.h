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
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_calculation
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *calculation)
    {
        if (calculation->objectName().isEmpty())
            calculation->setObjectName(QString::fromUtf8("calculation"));
        calculation->resize(400, 300);
        buttonBox = new QDialogButtonBox(calculation);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(calculation);
        QObject::connect(buttonBox, SIGNAL(accepted()), calculation, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), calculation, SLOT(reject()));

        QMetaObject::connectSlotsByName(calculation);
    } // setupUi

    void retranslateUi(QDialog *calculation)
    {
        calculation->setWindowTitle(QApplication::translate("calculation", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculation: public Ui_calculation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATION_H
