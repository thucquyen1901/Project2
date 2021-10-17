#include"PhongChieu.h"
PhongChieu::PhongChieu(){}

PhongChieu::PhongChieu(string MaPhongChieu, int SoCho, string MayChieu, string AmThanh, float DienTich, string TinhTrang, string MaBaoVe){
    this->MaPhongChieu = MaPhongChieu;
    this->SoCho = SoCho;
    this->MayChieu = MayChieu;
    this->AmThanh = AmThanh;
    this->DienTich = DienTich;
    this->TinhTrang = TinhTrang;
    this->MaBaoVe = MaBaoVe;
}

PhongChieu::~PhongChieu(){}

void PhongChieu::Display(){
    cout << "Mã Phòng Chiếu: " << this->MaPhongChieu << endl;
    cout << "Số Chỗ: " << this->SoCho << endl;
    cout << "Loại Máy Chiếu: " << this->MayChieu << endl;
    cout << "Loại Âm Thanh: " << this->AmThanh << endl;
    cout << "Diện Tích: " << this->DienTich << "mét vuông " << endl;
    cout << "Tinh Trang: "  << this->TinhTrang << endl;
    cout << "Mã Bảo Vệ: " << this->MaBaoVe << endl;
}