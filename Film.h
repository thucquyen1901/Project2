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
    Film(string = "Unknown", string = "Unknown", string = "Unknown", int = 0, string = "Unknown", string = "Unknown", int = 0, string = "Unknown");


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
    void Display2();
    void ShowMenu();
    void Phim();
    void searchFilm();
    void TimkiemPhim();
    ~Film();
};