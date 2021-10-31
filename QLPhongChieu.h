#include "PhongChieu.h"
#include<iostream>
using namespace std;
class QLPhongChieu
{
private:
    PhongChieu *p;
    int n;
public:
    QLPhongChieu(/* args */);
    ~QLPhongChieu();
    void Add_PC(PhongChieu);
    void Show();
    int checkMSPC(string s);
    void Update_NV(string m);
    void Delete_NV(string m);
};
