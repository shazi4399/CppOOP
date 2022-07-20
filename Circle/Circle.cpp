//
// Created by zhanghao on 22-7-19.
//
#include <iostream>
using namespace std;
class Circle{
private:
    int radius;
public:
    void SetRadius(int r){
        radius = r;
    }
    int GetRadius(){
        return radius;
    }
    void ShowRadius(){
        cout<<"Base class Circle:radius = "<<radius<<endl;
    }
};
class Cylinder : Circle{
private:
    int height;
public:
    void SetHeight(int h);
    int GetHeight();
    void ShowHeight();
    void Set(int r,int h);
    void Show();
};
void Cylinder::SetHeight(int h) {
    height = h;
}
int Cylinder::GetHeight() {
    return height;
}
void Cylinder::ShowHeight() {
    cout<<"Derived class Cylinder:height = "<<height<<endl;
}
void Cylinder::Set(int r,int h ){
    SetRadius(r);
    height = h;
}
void Cylinder::Show() {
    cout<<"radius=" << GetRadius()<<endl;
    cout<<"height=" <<height<<endl;
}

int main(){
    Cylinder obj;
    obj.Set(10,10);
    obj.Show();
    obj.ShowHeight();
    return 0;
}