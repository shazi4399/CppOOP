//
// Created by zhanghao on 22-7-19.
//
#include "Date.h"
#include <string>
#include <iostream>
using namespace std;
/**
* 以下为Date类的公用成员函数的类外定义
*/
Date::Date() {
    year = 2015;
    month = 1;
    day = 1;
}
Date::Date(char *strDate) {
    //从日期字符串中提取年份信息
    char y[5];
    int i = 0;
    while(strDate[i] != '\0'&&strDate[i]!=':'){
        y[i] = strDate[i];
        i++;
    }
    y[i] = '\0';
    year = atoi(y);
    //从日期字符串中提取月份信息
    if(strDate[i] != '\0')
        i++;
    char m[3];
    int j = i;
    int k = 0;
    while(strDate[i] != '\0' && strDate[i] != ':'){
        m[i-j] = strDate[i];
        i++;
        k++;
    }
    m[k] = '\0';
    month = atoi(m);
    //从日期字符串中提取日信息
    if(strDate[i] != '\0')
        i++;
    char d[3];
    j = i;
    k = 0;
    while(strDate[i] != '\0' && strDate[i] != ':'){
        d[i-j] = strDate[i];
        i++;
        k++;
    }
    d[k] = '\0';
    day = atoi(d);
}
Date::Date(int Y, int M, int D):year(Y),month(M),day(D){}

void Date::SetDate(int Y, int M, int D) {
    year = Y;
    month = M;
    day = D;
}
void Date::Show() const {
    cout<<year<<"年（";
    if(isLeapYear()){
        cout<<"润";
    }else{
        cout<<"平";
    }
    cout<<"年）"<<month<<"月"<<day<<"日";
    cout<<endl;
}
int Date::GetYear() {
    return year;
}
void Date::SetYear(int Y) {
    year = Y;
}
int Date::GetMonth() {
    return month;
}
void Date::SetMonth(int M) {
    month = M;
}
int Date::GetDay() {
    return day;
}
void Date::SetDay(int D) {
    day = D;
}
char * Date::toString() {
    char * arr = new char[20];

}
