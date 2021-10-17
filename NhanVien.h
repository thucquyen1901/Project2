#include<iostream>

using namespace std;

class NhanVien
{
private:
    string MaNhanVien;
    string HoTen;
    string NgaySinh;
    string QueQuan;
    string SoDienThoai;
    string SoCMT;
    string ChucVu;
    string PhanQuyen;
public:
    NhanVien(string, string, string, string, string, string, string, string);
    NhanVien();
    ~NhanVien();
    string getMaNV();
    string getHoTen();
    string getNgaySinh();
    string getQueQuan();
    string getSDT();
    string getSoCMT();
    string getChucVu();
    string getPhanQuyen();

    void setMaNV(string );
    void setHoTen(string );
    void setNgaySinh(string );
    void setQueQuan(string );
    void setSDT(string );
    void setSoCMT(string );
    void setChucVu(string );
    void setPhanQuyen(string );

    void Display();
};