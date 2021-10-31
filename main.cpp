#include <iostream>
#include <math.h>
#include<string>
#include"Film.h"
#include"QuanLyNhanVien.h"
using namespace std;

void ShowMenuKhachHang()
{
    Film F;
    int choose;
    do
    {
     F.ShowMenu();
     cin>>choose;
     switch (choose)
     {
     case 1:
         break;
     case 2:     
         break;
     case 3:
         break;    
     case 4:
         break;
     case 5:
         break;
     default:
         break;
     }
    } while (choose!=5);
}
int main(){
    //Đưa ra bảng Đăng Nhập Đăng Kí và lựa chọn khách hay nhân viên quản lí
    //code
    
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