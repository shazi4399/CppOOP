//
// Created by zhanghao on 22-7-19.
//p105
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Person{
public:
    Person(char * Name,int Age);
    Person(const Person &p);
    ~Person();
    void SetAge(int x) ;
    void Print();
private:
    char * name;
    int age;
};
Person::Person(char *Name, int Age) {
    this->name = new char[strlen(Name) + 1];
    strcpy(name,Name);
    this->age = Age;
    cout<<"This constructor of Person is called!"<<endl;
}
Person::Person(const Person &p){
    name = new char[strlen(p.name)+1];
    strcpy(name,p.name);
    age = p.age;
    cout<<"Copy constructor called !"<<endl;
}
Person::~Person() {
    cout<< "This destructor of Person is called!"<<endl;
    delete[] name;
    name = nullptr;
}
void Person::SetAge(int x) {
    age = x;
}
void Person::Print() {
    cout<< "name: " <<name <<endl<<"age: " <<age<<endl;
}

int main(){
    Person p1("vhhc",21);
    Person p2 = p1;
    p1.SetAge(1);
    p2.SetAge(2);
    p1.Print();
    p2.Print();
    return 0;
}