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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *App)
    {
        if (App->objectName().isEmpty())
            App->setObjectName(QString::fromUtf8("App"));
        App->resize(800, 600);
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
        label->setGeometry(QRect(230, 30, 331, 31));
        label->setAlignment(Qt::AlignCenter);
        tf_networkAddress = new QLineEdit(centralwidget);
        tf_networkAddress->setObjectName(QString::fromUtf8("tf_networkAddress"));
        tf_networkAddress->setGeometry(QRect(180, 110, 441, 41));
        te_hosts = new QTextEdit(centralwidget);
        te_hosts->setObjectName(QString::fromUtf8("te_hosts"));
        te_hosts->setGeometry(QRect(180, 180, 441, 221));
        btn_calculation = new QPushButton(centralwidget);
        btn_calculation->setObjectName(QString::fromUtf8("btn_calculation"));
        btn_calculation->setGeometry(QRect(180, 420, 151, 31));
        App->setCentralWidget(centralwidget);
        menubar = new QMenuBar(App);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        label->setText(QApplication::translate("App", "VLSM Calculator", nullptr));
        tf_networkAddress->setText(QString());
        tf_networkAddress->setPlaceholderText(QApplication::translate("App", "Network Address ( for example : 192.168.1.0/24)", nullptr));
        te_hosts->setPlaceholderText(QApplication::translate("App", "Enter title & number of host ( for example : marketing 43)", nullptr));
        btn_calculation->setText(QApplication::translate("App", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class App: public Ui_App {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H
