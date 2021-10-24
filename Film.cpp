#include <iostream>
#include "Film.h"
#include <vector>
using namespace std;

Film::Film(){};
Film::Film(string maPhim, string tenPhim, string theLoai, int thoiLuong, string daoDien, vector<string> dienvien, int namCongChieu, string quocGia)
{
    this->tenPhim = tenPhim;
    this->theLoai = theLoai;
    this->thoiLuong = thoiLuong;
    this->daoDien = daoDien;
    this->dienVien = dienVien;
    this->namCongChieu = namCongChieu;
    this->quocGia = quocGia;
    this->maPhim = maPhim;
}

void Film::setMaPhim(string maPhim)
{
    this->maPhim = maPhim;
}
void Film::setTenPhim(string tenPhim)
{
    this->tenPhim = tenPhim;
}
void Film::setTheLoai(string theLoai)
{
    this->theLoai = theLoai;
}
void Film::setThoiLuong(int thoiLuong)
{
    this->thoiLuong = thoiLuong;
}
void Film::setDaoDien(string daoDien)
{
    this->daoDien = daoDien;
}
void Film::setDienVien(vector<string> dienVien)
{
    this->dienVien = dienVien;
}
void Film::setNamCongChieu(int namCongChieu)
{
    this->namCongChieu = namCongChieu;
}
void Film::setQuocGia(string quocGia)
{
    this->quocGia = quocGia;
}
string Film::getMaPhim()
{
    return maPhim;
}
string Film::getTenPhim()
{
    return tenPhim;
}
string Film::getTheLoai()
{
    return theLoai;
}
int Film::getThoiLuong()
{
    return thoiLuong;
}
string Film::getDaoDien()
{
    return daoDien;
}
vector<string> Film::getDienVien()
{
    return dienVien;
}
string Film::getQuocGia()
{
    return quocGia;
}
void Film::display()
{
    cout << "Ma Phim: " << maPhim << endl;
    cout << "Ten Phim: " << tenPhim << endl;
    cout << "The Loai: " << theLoai << endl;
    cout << "Thoi Luong: " << thoiLuong << endl;
    cout << "Dao Dien: " << daoDien << endl;
    cout << "Dien Vien: ";
    for (int i = 0; i < dienVien.size(); i++)
    {
        cout << dienVien[i] << ", ";
    }
    cout << endl;
    cout << "Nam Cong Chieu: " << namCongChieu << endl;
    cout << "Quoc Gia: " << quocGia << endl;
}

void Film::ShowMenu()
{
    cout<<"\n1.Xem Hom nay co phim gi:";
    cout<<"\n2.Tim kiem Phim theo the loai:";
    cout<<"\n3.Tim kiem Phim";
    cout<<"\n4.Chon Xem Phim";
    cout<<"\n5.Thanh Toan";
    cout<<"\n6.Doi mat khau";
    cout<<"\n7.Thoat";
    cout<<"\nchon:";
}
Film::~Film(){};