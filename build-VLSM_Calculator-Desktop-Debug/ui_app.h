/********************************************************************************
** Form generated from reading UI file 'app.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APP_H
#define UI_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_App
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *tf_networkAddress;
    QTextEdit *te_hosts;
    QPushButton *btn_calculation;
    QTableWidget *tableWidget_Data;
    QPushButton *btn_reset;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *App)
    {
        if (App->objectName().isEmpty())
            App->setObjectName(QString::fromUtf8("App"));
        App->resize(1541, 692);
        centralwidget = new QWidget(App);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 2, 2));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(610, 20, 331, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        tf_networkAddress = new QLineEdit(centralwidget);
        tf_networkAddress->setObjectName(QString::fromUtf8("tf_networkAddress"));
        tf_networkAddress->setGeometry(QRect(10, 70, 421, 131));
        tf_networkAddress->setAlignment(Qt::AlignCenter);
        te_hosts = new QTextEdit(centralwidget);
        te_hosts->setObjectName(QString::fromUtf8("te_hosts"));
        te_hosts->setGeometry(QRect(440, 70, 481, 131));
        btn_calculation = new QPushButton(centralwidget);
        btn_calculation->setObjectName(QString::fromUtf8("btn_calculation"));
        btn_calculation->setGeometry(QRect(930, 70, 151, 31));
        QFont font1;
        font1.setPointSize(13);
        btn_calculation->setFont(font1);
        tableWidget_Data = new QTableWidget(centralwidget);
        if (tableWidget_Data->columnCount() < 5)
            tableWidget_Data->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        tableWidget_Data->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        tableWidget_Data->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        tableWidget_Data->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        tableWidget_Data->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        tableWidget_Data->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget_Data->setObjectName(QString::fromUtf8("tableWidget_Data"));
        tableWidget_Data->setGeometry(QRect(10, 220, 1521, 441));
        tableWidget_Data->horizontalHeader()->setDefaultSectionSize(240);
        btn_reset = new QPushButton(centralwidget);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));
        btn_reset->setGeometry(QRect(930, 110, 151, 31));
        btn_reset->setFont(font1);
        App->setCentralWidget(centralwidget);
        menubar = new QMenuBar(App);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1541, 22));
        App->setMenuBar(menubar);
        statusbar = new QStatusBar(App);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        App->setStatusBar(statusbar);

        retranslateUi(App);

        QMetaObject::connectSlotsByName(App);
    } // setupUi

    void retranslateUi(QMainWindow *App)
    {
        App->setWindowTitle(QApplication::translate("App", "App", nullptr));
        label->setText(QApplication::translate("App", "VLSM CALCULATOR", nullptr));
        tf_networkAddress->setText(QString());
        tf_networkAddress->setPlaceholderText(QApplication::translate("App", "Network Address ( for example : 192.168.1.0/24)", nullptr));
        te_hosts->setPlaceholderText(QApplication::translate("App", "Enter title & number of host ( for example : marketing 43)", nullptr));
        btn_calculation->setText(QApplication::translate("App", "Calculate", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Data->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("App", "Subnet Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Data->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("App", "Network Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Data->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("App", "Subnet Mask", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Data->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("App", "IP Range", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_Data->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("App", "Broadcast Address", nullptr));
        btn_reset->setText(QApplication::translate("App", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class App: public Ui_App {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H
