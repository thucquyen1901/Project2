#include<iostream>

using namespace std;

class Customer
{
private:
    string Gmail;
    string MatKhau;
public:
    string HoTen;
    Customer(string = "Unknown", string = "Unknown");
    ~Customer();
    void setGmail(string);
    void setMatKhau(string);
    string getGmail();
    string getMatKhau();
};