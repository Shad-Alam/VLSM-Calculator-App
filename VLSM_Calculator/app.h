#ifndef APP_H
#define APP_H

#include <QMainWindow>
#include <calculation.h>

QT_BEGIN_NAMESPACE
namespace Ui { class App; }
QT_END_NAMESPACE

class App : public QMainWindow
{
    Q_OBJECT

public:
    App(QWidget *parent = nullptr);
    ~App();

private slots:
    void on_btn_calculation_clicked();

private:
    Ui::App *ui;
    calculation *cal;
};
#endif // APP_H
