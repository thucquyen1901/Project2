#include "QuanLyPhim.h"
QuanLyPhim::QuanLyPhim()
{
    this->p = NULL;
    this->n = 0;
}

QuanLyPhim::~QuanLyPhim()
{
    delete[] this->p;
}

void QuanLyPhim::Add_Film(const Film &f)
{
    if (this->n == 0)
    {
        this->p = new Film[this->n + 1];
        *(this->p + this->n) = f;
    }
    else
    {
        Film *temp = new Film[this->n + 1];
        for (int i = 0; i < this->n; i++)
        {
            *(temp + i) = *(this->p + i);
        }
        delete[] this->p;
        this->p = new Film[this->n + 1];
        for (int i = 0; i < this->n; i++)
        {
            *(this->p + i) = *(temp + i);
        }
        delete[] temp;
        *(this->p + n) = f;
    }
    this->n++;
}

void QuanLyPhim::Show()
{
    cout << "Ma Phim";
    cout << setw(25) << "Ten Phim:     ";
    cout << setw(25) << "The loai:      ";
    cout << setw(25) << "Thoi Luong:     ";
    cout << setw(25) << "Dao Dien:     ";
    cout << setw(25) << "Dien Vien:     " << endl;
    for (int i = 0; i < this->n; i++)
    {
        (p + i)->Display();
    }
}

int QuanLyPhim::checkMSFilm(string s)
{
    int index = -1;
    for (int i = 0; i < this->n; i++)
    {
        if (s == (this->p + i)->getMaPhim())
        {
            index = i;
            break;
        }
    }
    return index;
}

// int QuanLyPhim::IndexOf(string k){
//     int index = -1;
//     for(int i = 0; i < this->n; i++){
//         if((this->p+i)->getMaPhim() == k){
//             index =
//         }
//     }
// }

void QuanLyPhim::Update_Film(string m)
{
    bool c = false;
    for (int i = 0; i < this->n; i++)
    {
        if (m == (this->p + i)->getMaPhim())
        {
            string g;
            system("cls");
            (this->p + i)->Display();
            cout << "Nhap Ten Moi:";
            fflush(stdin);
            getline(cin, g);
            (this->p + i)->setTenPhim(g);
            c = true;
        }
    }
    if (!c)
    {
        cout << "Khong tim thay";
        system("pause");
    }
    cout << endl;
}

// void QuanLyPhim::Delete_Film(string m){
//     bool c = false;
//     for(int i = 0; i < this->n; i++){
//         if(m == (this->p +i)->getMaPhim()){
//             if(this->n == 1){
//                 delete[] this->p;
//                 this->p = nullptr;
//             }
//             else {
//                 Film *temp = new Film[this->n];
//                 for(int k = 0; k < this->n ; k++){
//                     *(temp+k) = *(this->p + k);
//                 }
//                 delete[] this->p;
//                 this->p = new Film[this->n-1];
//                 for (int j = 0; j < this->n-1; j++)
//                 {
//                     if(j < i){
//                         *(this->p + j) = *(temp + j);
//                     }
//                     else{
//                         *(this->p + j) = *(temp + j + 1);
//                     }
//                 }
//                 delete[] temp;
//             }
//             c = true;
//         }
//     }
//     if(!c) cout << "Khong Tim Thay" << endl;
//     else {
//         this->n--;
//         cout << "Xoa Thanh Cong" << endl;
//     }
// }

void QuanLyPhim::Delete_Film(string m)
{
    int f = checkMSFilm(m);
    if (f >= 0)
    {
        if (this->n == 1)
        {
            delete[] this->p;
            this->p = nullptr;
        }
        else
        {
            Film *temp = new Film[this->n];
            for (int k = 0; k < this->n; k++)
            {
                *(temp + k) = *(this->p + k);
            }
            delete[] this->p;
            this->p = new Film[this->n - 1];
            for (int j = 0; j < this->n - 1; j++)
            {
                if (j < f)
                {
                    *(this->p + j) = *(temp + j);
                }
                else
                {
                    *(this->p + j) = *(temp + j + 1);
                }
            }
            delete[] temp;
        }
    }
    this->n--;
}