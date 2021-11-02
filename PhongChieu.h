#include<iostream>
#include<iomanip>
#include<math.h>
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
    
    void setMaPhongChieu(string);
    void setSoCho(int);
    void setMayChieu(string);
    void setAmThanh(string);
    void setDienTich(float);
    void setTinhTrang(string);
    void setMaBaoVe(string);

    string getMaPhongChieu();
    int getSoCho();
    string getMayChieu();
    string getAmThanh();
    float getDienTich();
    string getTinhTrang();
    string getMaBaoVe();

    void DisplayTable();

    void Display2();
    ~PhongChieu();
    void Display();
};
