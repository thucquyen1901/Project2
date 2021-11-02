#include "LoginData.h"



Customer::Customer(string Gmail, string MatKhau)
{
    this->Gmail = Gmail;
    this->MatKhau = MatKhau;
}

Customer::~Customer()
{
}


void Customer::setGmail(string Gmail){
    this->Gmail = Gmail;
}

void Customer::setMatKhau(string MatKhau){
    this->MatKhau = MatKhau;
}

string Customer::getGmail(){
    return this->Gmail;
}

string Customer::getMatKhau(){
    return this->MatKhau;
}
