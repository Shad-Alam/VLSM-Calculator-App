#ifndef CALCULATION_H
#define CALCULATION_H

#include <QDialog>

namespace Ui {
class calculation;
}

class calculation : public QDialog
{
    Q_OBJECT

public:
    explicit calculation(QWidget *parent = nullptr);
    ~calculation();

private:
    Ui::calculation *ui;
};

#endif // CALCULATION_H
