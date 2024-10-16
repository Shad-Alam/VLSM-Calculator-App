#include "app.h"
#include "ui_app.h"
#include "QVector"
//#include "QString"
//#include "string"
#include "bits/stdc++.h"

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

std::string App::getMask(int n){
    // per oct
    if(n==0){
        return {"0."};
    }

    if(n>=8){
        return {"255."};
    }else{
       // 11000000

        int sm = 0, p = 7;
        while(n>0){
            sm+=(1<<p);
            p--;
            n--;
        }

        return {std::to_string(sm) + "."};
    }
}


std::string App::getSubnetMask(int networkPortion){
    if(networkPortion>32 or networkPortion<0){
        return "-1";
    }

    std::string subnetMask = "", sm = "";

    int n = networkPortion;

    // error check n<0

    // 1st oct
    subnetMask+= getMask(n);
    n-=8;

    // 2nd oct
    subnetMask+=getMask(n);
    n-=8;

    // 3rd oct
    subnetMask+=getMask(n);
    n-=8;

    // 4th oct
    subnetMask+=getMask(n);
    n-=8;

    subnetMask.erase(subnetMask.begin()+(subnetMask.size()-1));

    return {subnetMask};
}


// Calculate Subnet Mask
Node App::calculateSubnetMask(int hosts){
    // total number of IP address required
    hosts+=2;

    int closestSubnetSize = 0, bitCount = 0, sm = 1;
    while(sm<hosts){
        sm<<=1, bitCount++;
    }

    closestSubnetSize = sm;

    int networkPortion = 32-bitCount;


    std::string subnetMask = getSubnetMask(networkPortion);

    return {hosts, subnetMask, networkPortion, closestSubnetSize, bitCount};
}


int App::getInt(std::string ms){
    int sm = 0;
    for(int a=ms.size()-1; a>=0; a--){
        std::stringstream ss; int nn;
        ss << ms[a];
        ss >> nn;
        sm = (sm*10) + nn;
    }

    return sm;
}

Octet App::seperateNetadd(std::string netadd){
    std::string ip = netadd, ms = ""; int sm = 0;

    while(netadd[netadd.size()-1]!='/'){
        char ch = netadd[netadd.size()-1];
        ms+=ch;
        netadd.erase(netadd.begin()+(netadd.size()-1));
    }

    netadd.erase(netadd.begin()+(netadd.size()-1));

    sm = getInt(ms);

    int oct[5]; int p = 0; ms = "";
    for(int a=0; a<netadd.size(); a++){
        if(netadd[a]!='.'){
            ms+=netadd[a];
        }else{
            std::reverse(ms.begin(), ms.end());
            oct[p] = getInt(ms);
            p++, ms = "";
        }
    }

    if(ms.size()>0){
        std::reverse(ms.begin(),ms.end());
        oct[p] = getInt(ms);
        p++;
    }

    return {oct[0], oct[1], oct[2], oct[3], sm};
}
//std::string getSubnetMask(int networkPortion);
//Node calculateSubnetMask(int hosts);
//int getInt(std::string ms);
//Octet seperateNetadd(std::string netadd);

void App::on_btn_calculation_clicked()
{
    QString netadd = ui->tf_networkAddress->text();
    QString hosts = ui->te_hosts->toPlainText();

    ui->tf_networkAddress->setText(hosts);
   // ui->te_hosts->setText("Shad Alam Joy");
   // tf_networkAddress

    ui->tableWidget_Data->setRowCount(100);
    for(int a=0; a<10; a++){
        ui->tableWidget_Data->setItem(a,0,new QTableWidgetItem(netadd));
        ui->tableWidget_Data->setItem(a,1,new QTableWidgetItem(QString("Joy")));
        ui->tableWidget_Data->setItem(a,2,new QTableWidgetItem(QString("Joy")));
        ui->tableWidget_Data->setItem(a,3,new QTableWidgetItem(QString("Joy")));
        ui->tableWidget_Data->setItem(a,4,new QTableWidgetItem(QString("Joy")));
    }
}

void App::on_btn_reset_clicked()
{

}
