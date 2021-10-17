#include <iostream>
#include <math.h>
#include<string>
#include"QuanLyNhanVien.h"
using namespace std;


int main(){;
    NhanVien n1( "1", "Quang Hoang", "3-5-2002", "Hue", "0918636253", "192033798", "NhanVienBanVe", "Ban ve");
    QuanLyNhanVien M1;
    M1.Add_NV(n1);
    M1.Show();
    return 0;
}