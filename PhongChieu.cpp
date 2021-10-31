#include"PhongChieu.h"
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

PhongChieu::PhongChieu(const PhongChieu& p){
    this->MaPhongChieu = p.MaPhongChieu;
    this->SoCho = p.SoCho;
    this->MayChieu = p.MayChieu;
    this->AmThanh = p.AmThanh;
    this->DienTich = p.DienTich;
    this->TinhTrang = p.TinhTrang;
    this->MaBaoVe = p.MaBaoVe;
}

void PhongChieu::Display2(){
    cout << "Mã Phòng Chiếu: " << this->MaPhongChieu << endl;
    cout << "Số Chỗ: " << this->SoCho << endl;
    cout << "Loại Máy Chiếu: " << this->MayChieu << endl;
    cout << "Loại Âm Thanh: " << this->AmThanh << endl;
    cout << "Diện Tích: " << this->DienTich << "mét vuông " << endl;
    cout << "Tinh Trang: "  << this->TinhTrang << endl;
    cout << "Mã Bảo Vệ: " << this->MaBaoVe << endl;
}

void PhongChieu::Display(){
    cout << setw(20) << left << this->MaPhongChieu << "|";
    cout << setw(20) << left << this->SoCho << "|";
    cout << setw(20) << left << this->MayChieu << "|";
    cout << setw(20) << left << this->AmThanh << "|";
    cout << setw(20) << left << this->DienTich << "|";
    cout << setw(20) << left << this->TinhTrang << endl;
}