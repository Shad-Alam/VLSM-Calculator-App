#ifndef APP_H
#define APP_H

#include <QMainWindow>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class App; }
QT_END_NAMESPACE

struct Octet{
    int first, second, third, fourth, mask;
};

struct Node{
    int hosts;
    std::string subnetMask;
    int networkPortion;
    int closestSubnetSize;
    int bitCount;
};

class App : public QMainWindow
{
    Q_OBJECT

public:
    App(QWidget *parent = nullptr);
    ~App();

private slots:
    void on_btn_calculation_clicked();
    void on_btn_reset_clicked();

private:
    Ui::App *ui;

private:
    std::string getMask(int n);
    std::string getSubnetMask(int networkPortion);
    Node calculateSubnetMask(int hosts);
    int getInt(std::string ms);
    Octet seperateNetadd(std::string netadd);

private:
    bool tableChecker;
};
#endif // APP_H
