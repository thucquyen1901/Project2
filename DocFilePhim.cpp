#include<iostream>
#include<fstream>
#include <stdlib.h>
#include "Film.h"
#include <string>
using namespace std;

void themPhim(int h){
    fstream Phim;
    string maPhim;
    string tenPhim;
    string theLoai;
    int thoiLuong;
    string daoDien;
    string dienVien;
    int namCongChieu;
    string quocGia;
    Phim.open("Phim.csv", ios::app);
    while(h > 0){
        cout << "Nhap: ";
        cin >> maPhim;
        cout << "Nhap:";
        cin >> tenPhim;
        cout << "Nhap:";
        cin >> theLoai;
        cout << "Nhap:";
        cin >> thoiLuong;
        cout << "Nhap:";
        cin >> daoDien;
        cout << "Nhap:";
        for(int i = 0; i < 3; i++){
            cin >> dienVien[i];
        }
        cout << "Nhap:";
        cin >> namCongChieu;
        cin >> quocGia;
        Phim << maPhim << ',' << tenPhim << ',' << theLoai << ',' << thoiLuong << ',' << daoDien << ',' << namCongChieu << ',' << quocGia << endl; 
        h--;
    }
}