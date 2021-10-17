#include"QuanLyNhanVien.h"
#include<iomanip>
int QuanLyNhanVien::ind = 0;

QuanLyNhanVien::QuanLyNhanVien(){
    this->ind++;
}

QuanLyNhanVien::~QuanLyNhanVien(){
    this->ind--;
}

void QuanLyNhanVien::Add_NV(NhanVien v){
    if(this->n == 0){
        this->p = new NhanVien[this->n+1];
        *(this->p + this->n) = v;
    }
    else{
        NhanVien *temp = new NhanVien[this->n+1];
        for(int i = 0; i < this->n; i++){
            *(temp+i) = *(this->p+i);
        }
        delete[] this->p;
        this->p = new NhanVien[this->n+1];
        for(int i = 0; i < this->n; i++){
            *(this->p+i) = *(temp+i); 
        }
        delete[] temp;
        *(this->p + n) = v;
    }   
    this->n++;
}

void QuanLyNhanVien::Show(){
    cout << "ID:";
    cout << setw(15) << "Name:";
    cout << setw(5) << "DoB:";
    cout << setw(20) << "Address:";
    cout << setw(20) << "Tel:";
    cout << setw(20) << "CMND:";
    cout << setw(20) << "Position:";
    cout << setw(20) << "Duty:" << endl;
    for(int i= 0; i < this->n; i++){
        (p+i)->Display();
    }
}

// int QuanLyNhanVien::IndexOf(string k){
//     int index = -1;
//     for(int i = 0; i < this->n; i++){
//         if((this->p+i)->getMaNV() == k){
//             index = 
//         }
//     }
// }

void QuanLyNhanVien::Update_NV(string m){
    bool c = false;
    for(int i = 0; i < this->n; i++){
        if(m == (this->p +i)->getMaNV()){
            string g;
            (this->p + i)->Display();
            cout << "Nhap Ten Moi:";
            cin >> g;
            (this->p + i)->setHoTen(g);
            c = true;
        }
    }
    if(!c) printf("Khong Tim Thay");
}

void QuanLyNhanVien::Delete_NV(string m){
    bool c = false;
    for(int i = 0; i < this->n; i++){
        if(m == (this->p +i)->getMaNV()){
            NhanVien *temp = new NhanVien[this->n];
            for(int i = 0; i < this->n ; i++){
                *(temp+i) = *(this->p + i);
            }
            delete[] this->p;
            this->p = new NhanVien[this->n-1];
            for (int j = 0; j < this->n; j++)
            {
                if(j < i){
                    *(this->p + j) = *(temp + j);
                }
                else{
                    *(this->p + j) = *(temp + j + 1);
                }
            }
            delete[] temp;
            c = true;
        }
        break;
    }
    if(!c) cout << "Khong Tim Thay" << endl;
    else {
        this->n--;
        cout << "Xoa Thanh Cong" << endl;
    }
}