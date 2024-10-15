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
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QPushButton *pushButton;
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
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 110, 441, 41));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(180, 180, 441, 221));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 420, 151, 31));
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
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("App", "Network Address ( for example : 192.168.1.0/24)", nullptr));
        textEdit->setPlaceholderText(QApplication::translate("App", "Enter title & number of host ( for example : marketing 43)", nullptr));
        pushButton->setText(QApplication::translate("App", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class App: public Ui_App {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H
