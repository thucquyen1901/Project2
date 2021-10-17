#include<iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string tel;
public:
    Person(){};
    void setPerson(){
        cout << "Name: "; cin >> name;
        cout << endl << "Age: "; cin >> age;
        cout << endl << "Telephone: "; cin >> tel;
    }
    Person(string name, int age, string tel){
        this->name = name;
        this->age = age;
        this->tel = tel;
    }
    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        this->age = age;
    }
    void setTel(string tel){
        this->tel = tel;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    string getTel(){
        return tel;
    }
    void display(){
        cout << "Name: " << name << "      Age: " << age << "      Tel: " << tel << endl;
    }
};