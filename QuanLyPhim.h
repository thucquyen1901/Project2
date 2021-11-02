#include "Film.h"
#include<string>
class QuanLyPhim
{
private:
    Film *p;
    int n;
public:
    QuanLyPhim();
    ~QuanLyPhim();
    void Show();
    void Add_Film(const Film&);
    int checkMSFilm(string);
    int IndexOf(string);
    void Update_Film(string);
    void Delete_Film(string);
};