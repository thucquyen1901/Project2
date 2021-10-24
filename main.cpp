#include <iostream>
#include <math.h>
#include "QuanLyPhim.h"
#include"QuanLyNhanVien.h"
using namespace std;



int main(){
    Film f2("1", "Ve Binh Giai Ngan Ha", "Sieu Anh Hung", 120, "Quang Hoang", "Quang Hoang", 2017, "Viet Nam");
    QuanLyPhim p;
    p.Add_Film(f2);
    p.Show();
    system("pause");
    return 0;
}