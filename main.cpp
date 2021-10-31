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
QuanLyNhanVien QLNV;
QuanLyPhim QLP;
vector<Customer> CTM;

void them(QuanLyPhim& m){
    Film f1("1", "Ve Binh Giai Ngan Ha", "Sieu Anh Hung", "120", "Quang Hoang", "Quang Hoang", "2017", "Viet Nam");
    m.Add_Film(f1);
}


int main(){
    // them(QLP);
    DocFile(QLNV, QLP, CTM, SoKhach);
    QLP.Show();
    // SetConsoleOutputCP(65001);
    // system("cls");
    return 0;
}