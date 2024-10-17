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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_App
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QLineEdit *tf_networkAddress;
    QPushButton *btn_calculation;
    QLabel *label;
    QPushButton *btn_reset;
    QTableWidget *tableWidget_Data;
    QTextEdit *te_hosts;
    QPushButton *btn_export_csv;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *App)
    {
        if (App->objectName().isEmpty())
            App->setObjectName(QString::fromUtf8("App"));
        App->setWindowModality(Qt::WindowModal);
        App->resize(1250, 779);
        App->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: #9ABFDC;\n"
"}"));
        App->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(App);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tf_networkAddress = new QLineEdit(centralwidget);
        tf_networkAddress->setObjectName(QString::fromUtf8("tf_networkAddress"));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        tf_networkAddress->setFont(font);
        tf_networkAddress->setAutoFillBackground(false);
        tf_networkAddress->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: black;\n"
"	background-color: white;\n"
"	border: 1px solid black;\n"
"   border-radius: 10px;\n"
"   padding: 12px;\n"
"}"));
        tf_networkAddress->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addWidget(tf_networkAddress, 2, 0, 1, 2);

        btn_calculation = new QPushButton(centralwidget);
        btn_calculation->setObjectName(QString::fromUtf8("btn_calculation"));
        QFont font1;
        btn_calculation->setFont(font1);
        btn_calculation->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(239, 41, 41);\n"
"	color: white;\n"
"    border-radius: 5px;\n"
"	font-size: 17px;\n"
"	padding: 5px;\n"
"	margin: 5px;\n"
"}"));

        gridLayout_2->addWidget(btn_calculation, 4, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: black;\n"
"   font-size: 30px;\n"
"   margin-bottom: 20px;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 1, 2, 1, 1);

        btn_reset = new QPushButton(centralwidget);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));
        btn_reset->setFont(font1);
        btn_reset->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: blue;\n"
"	color: white;\n"
"    border-radius: 5px;\n"
"	font-size: 17px;\n"
"	padding: 5px;\n"
"	margin: 5px;\n"
"}"));

        gridLayout_2->addWidget(btn_reset, 4, 0, 1, 1);

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
        tableWidget_Data->setMaximumSize(QSize(10000000, 16777215));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        tableWidget_Data->setFont(font3);
        tableWidget_Data->setAutoFillBackground(false);
        tableWidget_Data->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"	color: green;\n"
"	background-color: white;\n"
"	margin:3px;\n"
"	text-align:center;\n"
"	border: 1px solid black;\n"
"}"));
        tableWidget_Data->setFrameShape(QFrame::StyledPanel);
        tableWidget_Data->setFrameShadow(QFrame::Plain);
        tableWidget_Data->setAutoScroll(true);
        tableWidget_Data->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableWidget_Data->setDefaultDropAction(Qt::CopyAction);
        tableWidget_Data->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        tableWidget_Data->setGridStyle(Qt::CustomDashLine);
        tableWidget_Data->horizontalHeader()->setVisible(true);
        tableWidget_Data->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_Data->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget_Data->horizontalHeader()->setHighlightSections(true);
        tableWidget_Data->verticalHeader()->setHighlightSections(false);

        gridLayout_2->addWidget(tableWidget_Data, 2, 2, 4, 1);

        te_hosts = new QTextEdit(centralwidget);
        te_hosts->setObjectName(QString::fromUtf8("te_hosts"));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        te_hosts->setFont(font4);
        te_hosts->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"	color: black;\n"
"	background-color: white;\n"
"   border: 1px solid black;\n"
"   border-radius: 10px;\n"
"   padding: 10px;\n"
"}"));

        gridLayout_2->addWidget(te_hosts, 3, 0, 1, 2);

        btn_export_csv = new QPushButton(centralwidget);
        btn_export_csv->setObjectName(QString::fromUtf8("btn_export_csv"));
        btn_export_csv->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"   background-color: #1d8348;\n"
"   border-radius: 5px;\n"
"	font-size: 17px;\n"
"	padding: 5px;\n"
"	margin-left: 5px;\n"
"	margin-right: 5px;\n"
"}"));

        gridLayout_2->addWidget(btn_export_csv, 5, 1, 1, 1);

        App->setCentralWidget(centralwidget);
        menubar = new QMenuBar(App);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1250, 22));
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
        tf_networkAddress->setText(QString());
        tf_networkAddress->setPlaceholderText(QApplication::translate("App", "Network Address(Ex : 192.168.1.0/24)", nullptr));
        btn_calculation->setText(QApplication::translate("App", "Calculate", nullptr));
        label->setText(QApplication::translate("App", "VLSM CALCULATOR", nullptr));
        btn_reset->setText(QApplication::translate("App", "Reset", nullptr));
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
        te_hosts->setPlaceholderText(QApplication::translate("App", "Enter title & number of host ( for example : marketing 43)", nullptr));
        btn_export_csv->setText(QApplication::translate("App", "Export CSV", nullptr));
    } // retranslateUi

};

namespace Ui {
    class App: public Ui_App {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H
