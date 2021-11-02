#include <iostream>
#include "DocFile.h"
#include <math.h>
#include "QuanLyPhim.h"
#include "QuanLyNhanVien.h"
#include "QLPhongChieu.h"
#include "DoHoa.h"
#include <windows.h>
#include "Time.h"
#include "LoginData.h"
using namespace std;

int SoKhach;
QuanLyNhanVien QLNV;
QuanLyPhim QLP;
vector<Customer> CTM;
QLPhongChieu QLPC;

int main(){
    DocFile(QLNV, QLP, QLPC, CTM, SoKhach);
    QLP.XemTheloaiPhim();
    QLP.XemDSPhimCuaTheLoai("Sieu Anh Hung");
    QLP.XemDSPhimCuaTheLoai("Kinh Di");
    // system("cls");
    return 0;
}