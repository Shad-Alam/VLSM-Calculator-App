#include "app.h"
#include "ui_app.h"
#include "QVector"
//#include "QString"
//#include "string"
#include "bits/stdc++.h"

#define pb  push_back

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

void App::on_btn_calculation_clicked()
{
    QString netaddress = ui->tf_networkAddress->text();
    QString hostList = ui->te_hosts->toPlainText();
    // Provide network address
    std::string netadd = netaddress.toStdString();// "192.168.1.0/24";
    std::string s = hostList.toStdString();

    //netadd = "192.168.100.0/24";
    //netadd = "10.0.0.0/8";

    // seperate net address and find default subnetMask
    // find which type of IP address this is

    std::vector<std::pair<std::string,int>> j;

    std::string sm = ""; int ahq = 0;
    for(int a=0; a<s.size(); a++){
        if((s[a]>='a' && s[a]<='z') || (s[a]>='A' && s[a]<='Z')){
            sm+=s[a];
        }else if(s[a]>='0' && s[a]<='9'){
            std::stringstream ss; int nnn;
            ss << s[a];
            ss >> nnn;
            ahq = (ahq*10) + nnn;
        }else{
            if(sm.size()>0 && ahq>0){
                j.pb({sm, ahq});
                sm = "", ahq = 0;
            }

            if(sm.size()>0 && ahq==0){
                continue;
            }

            sm = "", ahq = 0;
        }
    }

    if(sm.size()>0 && ahq>0){
        j.pb({sm,ahq});
    }

    std::sort(j.begin(), j.end(),[&](std::pair<std::string,int> x,std::pair<std::string,int> y){
        return x.second>y.second;
    });

    //std::re

    int n = j.size();

    int hosts[n+1];
    for(int a=0; a<n; a++){
        hosts[a] = j[a].second;
    }

    bool ans = false;
    //{1,{2,{3,{4,5}}}
    std::vector<std::pair<std::string,std::pair<std::string, std::pair<std::string,std::pair<std::string,std::string>>>>> v;
    for(int a=0; a<n; a++){
        Octet oct = seperateNetadd(netadd);
        int n1 = oct.first, n2 = oct.second, n3 = oct.third, n4 = oct.fourth;
        Node s = calculateSubnetMask(hosts[a]);

        bool port = false;

        if(n4==0){
            port = true;
        }

        std::string ip = std::to_string(oct.first) + "." + std::to_string(oct.second) + "." + std::to_string(oct.third) + "." + std::to_string(oct.fourth);
        ip+= "/" + std::to_string(s.networkPortion);

        std::string fip = std::to_string(n1) + "." + std::to_string(n2) + "." + std::to_string(n3) + "." + std::to_string(n4+1);
        s.closestSubnetSize--;

        int r4 = (n4+s.closestSubnetSize)%256;
        int r3 = (n4+s.closestSubnetSize)/256;
        n4 = r4;

        int r2 = (n3+r3)%256;
        int r1 = (n3+r3)/256;
        n3 = r2;

        int rd1 = (n2+r1)%256;
        int rd2 = (n2+r1)/256;
        n2 = rd1;
        n1 = (n1+rd2);

        if(n1>255){
            port = true;
        }

        std::string secip = std::to_string(n1) + "." + std::to_string(n2) + "." + std::to_string(n3) + "." + std::to_string(n4-1);

        std::string broadcastAddress = "";
        broadcastAddress = std::to_string(n1) + "." + std::to_string(n2) + "." + std::to_string(n3) + "." + std::to_string(n4);

        v.pb({std::to_string(a),{ip,{s.subnetMask,{fip + " to " + secip, broadcastAddress}}}});

        Octet newoc = seperateNetadd(broadcastAddress+"/"+std::to_string(s.networkPortion));

        n1 = newoc.first, n2 = newoc.second, n3 = newoc.third, n4 = newoc.fourth;

        if(n4+1<=255){
            n4++;
        }else{
            n4 = 0;
            if(n3+1<=255){
                n3++;
            }else{
                n3 = 0;
                if(n2+1<=255){
                    n2++;
                }else{
                    n2 = 0;
                    if(n1+1<=255){
                        n1++;
                    }else{
                        // invalid broadcast address
                        port = true;
                    }
                }
            }
        }

        netadd = std::to_string(n1) + "." + std::to_string(n2) + "." + std::to_string(n3) + "." + std::to_string(n4);
        // update network address
        netadd+="/" + std::to_string(s.networkPortion);
    }


    if(!ans){
        ui->tableWidget_Data->setRowCount(v.size());
        for(int a=0; a<v.size(); a++){
            //{1,{2,{3,{4,5}}}
            ui->tableWidget_Data->setItem(a, 0, new QTableWidgetItem(QString::fromStdString(j[a].first + " " + std::to_string(j[a].second)+" hosts")));
            ui->tableWidget_Data->setItem(a, 1, new QTableWidgetItem(QString::fromStdString(v[a].second.first)));
            ui->tableWidget_Data->setItem(a, 2, new QTableWidgetItem(QString::fromStdString(v[a].second.second.first)));
            ui->tableWidget_Data->setItem(a, 3, new QTableWidgetItem(QString::fromStdString(v[a].second.second.second.first)));
            ui->tableWidget_Data->setItem(a, 4, new QTableWidgetItem(QString::fromStdString(v[a].second.second.second.second)));
        }
    }else{
        // error message
    }
}

void App::on_btn_reset_clicked()
{

}
