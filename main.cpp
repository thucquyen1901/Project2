#include <iostream>
#include "DocFile.h"
#include <math.h>
#include "QuanLyPhim.h"
#include"QuanLyNhanVien.h"
#include "DoHoa.h"
#include <windows.h>
#include "Time.h"
#include "LoginData.h"
using namespace std;
int SoKhach;
// void them(QuanLyPhim& m){
//     Film f1("1", "Ve Binh Giai Ngan Ha", "Sieu Anh Hung", 120, "Quang Hoang", "Quang Hoang", 2017, "Viet Nam");
//     m.Add_Film(f1);
// }

QuanLyNhanVien QLNV;
QuanLyPhim QLP;
vector<Customer> CTM;

int main(){
    DocFile(QLNV, QLP, CTM, SoKhach);
    QLP.Show();
    // SetConsoleOutputCP(65001);
    // system("cls");
    // Film f1("1", "Ve Binh Giai Ngan Ha", "Sieu Anh Hung", 120, "Quang Hoang", "Quang Hoang", 2017, "Viet Nam");
    // Film f2("2", "Ve Binh Giai Ngan Ha", "Sieu Anh Hung", 120, "Quang Hoang", "Quang Hoang", 2017, "Viet Nam");
    // Film f3("3", "Ve Binh Giai Ngan Ha", "Sieu Anh Hung", 120, "Quang Hoang", "Quang Hoang", 2017, "Viet Nam");
    // QuanLyPhim p;
    // p.Add_Film(f1);
    // p.Add_Film(f2);
    // p.Add_Film(f3);
    // p.Show();
    // p.Update_Film("6");
    // p.Delete_Film("1");
    // p.Show();
    return 0;
}