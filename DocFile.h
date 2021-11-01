#include<iostream>
#include<fstream>
#include <stdlib.h>
#include "QLPhongChieu.h"
#include "QuanLyPhim.h"
#include "QuanLyNhanVien.h"
#include "LoginData.h"
#include <string>
#include <vector>
#include <algorithm>
#pragma once
using namespace std;

void DocFile(QuanLyNhanVien& QLNV,QuanLyPhim& QLP, QLPhongChieu& QLPC ,vector<Customer>& CTM, int& SoKhach){
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

    ifstream ip3("PhongChieu.csv");
    while(ip3.peek()!= EOF){
        string maPC,socho,maychieu,amthanh,dientich,tinhtrang,maBV;
        getline(ip3,maPC,',');
        getline(ip3,socho,',');
        getline(ip3,maychieu,',');
        getline(ip3,amthanh,',');
        getline(ip3,dientich,',');
        getline(ip3,tinhtrang,',');
        getline(ip3,maBV,'\n');
        int nsocho = stoi(socho);
        float ndientich = stoi(dientich);
        PhongChieu temp(maPC,nsocho,maychieu,amthanh,ndientich,tinhtrang,maBV);
        QLPC.Add_PC(temp);
    }
    ip3.close();

    ifstream ip4("NhanVien.csv");
    while(ip4.peek()!= EOF){
        string MaNV,HoTen,NgaySinh,QueQuan,SDT,SoCMT,ChucVu,PhanQuyen;
        getline(ip4,MaNV,',');
        getline(ip4,HoTen,',');
        getline(ip4,NgaySinh,',');
        getline(ip4,QueQuan,',');
        getline(ip4,SDT,',');
        getline(ip4,SoCMT,',');
        getline(ip4,ChucVu,',');
        getline(ip4,PhanQuyen,'\n');
        NhanVien temp(MaNV,HoTen,NgaySinh,QueQuan,SDT,SoCMT,ChucVu,PhanQuyen);
        QLNV.Add_NV(temp);
    }
    ip4.close();
}