#include "NhanVien.h"

NhanVien::NhanVien(){}

NhanVien::NhanVien(string MaNhanVien, string HoTen, string NgaySinh, string QueQuan, string SoDienThoai, string SoCMT, string ChucVu, string PhanQuyen){
    this->MaNhanVien =  MaNhanVien;
    this->HoTen = HoTen;
    this->NgaySinh = NgaySinh;
    this->QueQuan = QueQuan;
    this->SoDienThoai = SoDienThoai;
    this->SoCMT = SoCMT;
    this->ChucVu = ChucVu;
    this->PhanQuyen = PhanQuyen;
}

    string NhanVien::getMaNV(){
        return this->MaNhanVien;
    }
    
    string NhanVien::getHoTen(){
        return this->HoTen;
    }
    
    string NhanVien::getNgaySinh(){
        return this->NgaySinh;
    }
    
    string NhanVien::getQueQuan(){
        return this->QueQuan;
    }
    
    string NhanVien::getSDT(){
        return this->SoDienThoai;
    }
    
    string NhanVien::getSoCMT(){
        return this->SoCMT;
    }
    
    string NhanVien::getChucVu(){
        return this->ChucVu;
    }
    
    string NhanVien::getPhanQuyen(){
        return this->PhanQuyen;
    }
    // ham set
    void NhanVien::setMaNV(string MaNhanVien){
        this->MaNhanVien = MaNhanVien;
    }
    
    void NhanVien::setHoTen(string HoTen){
        this->HoTen = HoTen;
    }
    
    void NhanVien::setNgaySinh(string NgaySinh){
        this->NgaySinh = NgaySinh;
    }
    
    void NhanVien::setQueQuan(string QueQuan){
        this->QueQuan = QueQuan;
    }
    
    void NhanVien::setSDT(string SoDienThoai){
        this->SoDienThoai = SoDienThoai;
    }
    
    void NhanVien::setSoCMT(string SoCMT){
        this->SoCMT = SoCMT;
    }
    
    void NhanVien::setChucVu(string ChucVu){
        this->ChucVu = ChucVu;
    }
    
    void NhanVien::setPhanQuyen(string PhanQuyen){
        this->PhanQuyen = PhanQuyen;
    }
    
void NhanVien::Display(){
    cout << "Mã Nhân Viên: " << this->MaNhanVien << endl;
    cout << "Họ Tên: " << this->HoTen << endl;
    cout << "Ngày Sinh: " << this->NgaySinh << endl;
    cout << "Quê Quán: " << this->QueQuan << endl;
    cout << "STD: " << this->SoDienThoai << endl;
    cout << "CMND: " << this->SoCMT << endl;
    cout << "Chức Vụ: " << this->ChucVu  << endl;
    cout << "Phân Quyền: " << this->PhanQuyen << endl;
}