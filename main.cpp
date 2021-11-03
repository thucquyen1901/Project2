#include <iostream>
#include "DocFile.h"
#include <math.h>
#include "QuanLyPhim.h"
#include "QuanLyNhanVien.h"
#include "QuanLyLichChieu.h"
#include "QLPhongChieu.h"
#include "DoHoa.h"
#include <windows.h>
#include "Time.h"
#include "LoginData.h"
using namespace std;

void ShowMenuKhachHang()
{
    // Film F;
    // int choose;
    // do
    // {
    //  F.ShowMenu();
    //  cin>>choose;
    //  switch (choose)
    //  {
    //  case 1:
    //      break;
    //  case 2:     
    //      break;
    //  case 3:
    //      break;    
    //  case 4:
    //      break;
    //  case 5:
    //      break;
    //  default:
    //      break;
    //  }
    // } while (choose!=5);
}

// int main(){
//     //Đưa ra bảng Đăng Nhập Đăng Kí và lựa chọn khách hay nhân viên quản lí
//     //code

// }
QuanLyNhanVien QLNV;
QuanLyPhim QLP;
vector<Customer> CTM;
QLPhongChieu QLPC;
QuanLyLichChieu QLLC;
int SoKhach;
int main(){
    DocFile(QLNV, QLP, QLPC, CTM, SoKhach);
    QLP.Show();
    QLLC.setLichChieu();
    QLLC.Show();
    return 0;
}