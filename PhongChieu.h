#include<iostream>
#include<iomanip>
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

    PhongChieu(string = "Unkown", int = 0 ,string = "Unkown", string = "Unkown", float = 0, string = "Unkown", string = "Unkown");
    PhongChieu(const PhongChieu&);
    void Display();
    void Display2();
    ~PhongChieu();
    void Display();
};
