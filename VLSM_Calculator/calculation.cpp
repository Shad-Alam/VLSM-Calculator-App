#include "calculation.h"
#include "ui_calculation.h"

calculation::calculation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calculation)
{
    ui->setupUi(this);
}

calculation::~calculation()
{
    delete ui;
}
