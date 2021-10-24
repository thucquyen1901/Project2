#include<iostream>
#include<iomanip>
#pragma once
using namespace std;

class Film
{
private:
    string maPhim;
    string tenPhim;
    string theLoai;
    int thoiLuong;
    string daoDien;
    string dienVien;
    int namCongChieu;
    string quocGia;
public:
    Film(string = "", string = "", string = "", int = 0, string = "", string = "", int = 0, string = "");


    void setMaPhim(string);
    void setTenPhim(string);
    void setTheLoai(string);
    void setThoiLuong(int);
    void setDaoDien(string);
    void setDienVien(string);
    void setNamCongChieu(int);
    void setQuocGia(string);
    string getMaPhim();
    string getTenPhim();
    string getTheLoai();
    int getThoiLuong();
    string getDaoDien();
    string getDienVien();
    string getQuocGia();
    void Display();
    void ShowMenu();
    ~Film();
};