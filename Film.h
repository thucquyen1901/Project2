#include<iostream>
#include<vector>
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
    vector<string> dienVien;
    int namCongChieu;
    string quocGia;
public:
    Film();
    Film(string, string , string , int , string , vector<string> , int , string );
    void setMaPhim(string);
    void setTenPhim(string);
    void setTheLoai(string);
    void setThoiLuong(int);
    void setDaoDien(string);
    void setDienVien(vector<string>);
    void setNamCongChieu(int);
    void setQuocGia(string);
    string getMaPhim();
    string getTenPhim();
    string getTheLoai();
    int getThoiLuong();
    string getDaoDien();
    vector<string> getDienVien();
    string getQuocGia();
    void display();
    void ShowMenu();
    void Film::Phim();
    void Film::InsertFilm();
    void Film::TimkiemPhim();
    void Film::ThanhToan();
    ~Film();
};