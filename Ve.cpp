#include "Ve.h"

Ve::Ve(){}

Ve::Ve(string MaVe, string TenLoaiVe, string LoaiPhim, string LoaiKhachHang, int GiaLoaiVe){
    this->MaVe = MaVe;
    this->TenLoaiVe = TenLoaiVe;
    this->LoaiPhim = LoaiPhim;
    this->LoaiKhachHang = LoaiKhachHang;
    this->GiaLoaiVe = GiaLoaiVe;
}

Ve::~Ve(){}

void Ve::Display(){
    cout << "Mã Vé: " << this->MaVe  << endl;
    cout << "Tên Loại Vé: " << this->TenLoaiVe << endl;
    cout << "Loại Phim: " << this->LoaiPhim << endl;
    cout << "Loại Khách Hàng: " << this->LoaiKhachHang << endl;
    cout << "Giá Vé: " << this->GiaLoaiVe << endl;
}