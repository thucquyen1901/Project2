#include<iostream>

using namespace std;

class Ve
{
private:
    string MaVe;
    string TenLoaiVe;
    string LoaiPhim;
    string LoaiKhachHang;
    int GiaLoaiVe;
public:
    Ve(string, string, string, string, int);
    //void setTenLoaiVe(string);
    //void setGiaLoaiVe(int);
    //string getTenLoaiVe(string);
    //int getGiaLoaiVe(int);
    Ve();
    ~Ve();
    void Display();
};
