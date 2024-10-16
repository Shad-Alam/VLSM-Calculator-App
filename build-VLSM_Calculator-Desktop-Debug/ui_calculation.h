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
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_calculation
{
public:
    QLabel *label;
    QPushButton *expor;
    QTableWidget *tableWidget_Data;

    void setupUi(QDialog *calculation)
    {
        if (calculation->objectName().isEmpty())
            calculation->setObjectName(QString::fromUtf8("calculation"));
        calculation->resize(914, 642);
        label = new QLabel(calculation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 531, 91));
        expor = new QPushButton(calculation);
        expor->setObjectName(QString::fromUtf8("expor"));
        expor->setGeometry(QRect(750, 40, 151, 41));
        tableWidget_Data = new QTableWidget(calculation);
        if (tableWidget_Data->columnCount() < 5)
            tableWidget_Data->setColumnCount(5);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        tableWidget_Data->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font);
        tableWidget_Data->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font);
        tableWidget_Data->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font);
        tableWidget_Data->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem4->setFont(font);
        tableWidget_Data->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget_Data->setObjectName(QString::fromUtf8("tableWidget_Data"));
        tableWidget_Data->setGeometry(QRect(10, 100, 891, 531));
        tableWidget_Data->setLayoutDirection(Qt::LeftToRight);
        tableWidget_Data->setFrameShape(QFrame::StyledPanel);
        tableWidget_Data->setFrameShadow(QFrame::Raised);
        tableWidget_Data->setLineWidth(2);
        tableWidget_Data->setMidLineWidth(0);
        tableWidget_Data->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget_Data->setTextElideMode(Qt::ElideMiddle);
        tableWidget_Data->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_Data->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_Data->setGridStyle(Qt::CustomDashLine);
        tableWidget_Data->setWordWrap(false);
        tableWidget_Data->horizontalHeader()->setDefaultSectionSize(165);

        retranslateUi(calculation);

        QMetaObject::connectSlotsByName(calculation);
    } // setupUi

    void retranslateUi(QDialog *calculation)
    {
        calculation->setWindowTitle(QApplication::translate("calculation", "Dialog", nullptr));
        label->setText(QApplication::translate("calculation", "Subnet Name, Network Address, Subnet Mask, IP Range, Broadcast Address", nullptr));
        expor->setText(QApplication::translate("calculation", "Export CSV", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Data->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("calculation", "Subnet Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Data->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("calculation", "Nework Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Data->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("calculation", "Subnet Mask", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Data->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("calculation", "IP Range", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_Data->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("calculation", "Broadcast Address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculation: public Ui_calculation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATION_H
