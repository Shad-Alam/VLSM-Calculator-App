#include "app.h"
#include "ui_app.h"

App::App(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::App)
{
    ui->setupUi(this);
}

App::~App()
{
    delete ui;
}
/**
void App::on_pushButton_clicked()
{
    //QString name = ui->lineEdit->text();

    //ui->lb_name->setText(name);

   // QMesssageBox::information(this, "title here", "Hello Shad")
}
*/

void App::on_btn_calculation_clicked()
{
    hide();
    cal = new calculation(this);
    cal->show();
}
