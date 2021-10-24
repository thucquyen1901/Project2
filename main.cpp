#include <iostream>
#include <math.h>
#include<string>
#include"QuanLyNhanVien.h"
using namespace std;


int main(){;
    NhanVien n1( "Nv1", "Quang Hoang", "3-5-2002", "Hue", "0918636253", "192033798", "NhanVienBanVe", "Ban ve");
    NhanVien n2( "Nv2", "Quang Hoang", "3-5-2002", "Hue", "0918636253", "192033798", "NhanVienBanVe", "Ban ve");
    NhanVien n3( "Nv3", "Hoang Quang", "3-5-2002", "Hue", "0918636253", "192033798", "NhanVienBanVe", "Ban ve");
    QuanLyNhanVien M1;
    M1.Add_NV(n1);
    M1.Add_NV(n2);
    M1.Add_NV(n3);
    M1.Show();
    // M1.Update_NV("Nv3");
    // M1.Show();
    M1.Delete_NV("Nv2");
    system("pause");
    return 0;
}