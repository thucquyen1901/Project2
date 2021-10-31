#include<iostream>
#include<fstream>
#include <stdlib.h>
#include "QuanLyPhim.h"
#include "QuanLyNhanVien.h"
#include "LoginData.h"
#include <string>
#include <vector>
#include <algorithm>
#pragma once
using namespace std;

void DocFile(QuanLyNhanVien& QLNV,QuanLyPhim& QLP,vector<Customer>& CTM, int& SoKhach){
    int i = -1;
    ifstream ip("GuestData.csv");
    string Gmail;
    string MatKhau;
    string HoTen;
    while(ip.peek()!=EOF){
        i++;
        getline(ip,Gmail,',');
        getline(ip,MatKhau,',');
        getline(ip,HoTen,'\n');
        Customer temp; temp.setGmail(Gmail); temp.setMatKhau(MatKhau); temp.HoTen = HoTen;
        CTM.push_back(temp);
    }
    ip.close();
    SoKhach = i;
    ifstream ip2("Phim.csv");
    while(ip2.peek()!= EOF){
        string ti,ye;
        string mp,tp,tl,dd,dds,qg;
        getline(ip2,mp,',');
        getline(ip2,tp,',');
        getline(ip2,tl,',');
        getline(ip2,ti,',');
        getline(ip2,dd,',');
        getline(ip2,dds,',');
        getline(ip2,ye,',');
        getline(ip2,qg,'\n');
        Film temp(mp,tp,tl,ti,dd,dds,ye,qg);
        QLP.Add_Film(temp);
    }
    ip2.close();
}