#include<iostream>
using namespace std;
class PhongChieu
{
private:
    string MaPhongChieu;
    int SoCho;
    string MayChieu;
    string AmThanh;
    float DienTich;
    string TinhTrang;
    string MaBaoVe;
public:
    PhongChieu();
    PhongChieu(string, int ,string, string, float, string, string);
    ~PhongChieu();
    void Display();
};
