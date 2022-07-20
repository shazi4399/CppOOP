//
// Created by zhanghao on 22-7-20.
//
//此程序为p89 例3-17源代码
#include <iostream>
using namespace std;
class Box{
private:
    float length,width,height;
public:
    Box(){
        length = 1;
        width = 1;
        height = 1;
        cout<<"Box("<<length<<","<<width<<","<<height<<")";
        cout<<"is constructed!"<<endl;
    }
    Box(float L,float W,float H){
        length = L;
        width = W;
        height = H;
        cout<<"Box("<<length<<","<<width<<","<<height<<")";
        cout<<"is constructed!"<<endl;
    }
    float Volume(){
        return height*width*height;
    }
    ~Box(){
        cout<<"Box("<<length<<","<<width<<","<<height<<")";
        cout<<"is destructed!"<<endl;
    }
};
int main(){
    Box box(2,2,2);
    float (Box::*p)();
    p = &Box::Volume;
    cout<<"The volume of box is "<<(box.*p)()<<endl;
}