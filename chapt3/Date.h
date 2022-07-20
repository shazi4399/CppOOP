//
// Created by zhanghao on 22-7-19.
//

#ifndef SM4_PROJECT_DATE_H
#define SM4_PROJECT_DATE_H
class Date{
private:
    int year;
    int month;
    int day;
    void addOneDay();
    void subOneDay();
    int subSmallDate(const Date &dat)const;
public:
    Date();
    Date(char strDate[]);
    Date(int Y,int M,int D);
    void SetDate(int Y ,int M,int D);
    void Show() const;
    int GetYear();
    void SetYear(int Y);
    int GetMonth();
    void SetMonth(int M);
    int GetDay();
    void SetDay(int D);
    char * toString();
    int daysPerMonth(int m = -1)const;
    int dyasPerYear(int y = -1)const;
    int compare(const Date& date)const;
    bool isLeapYear(int y = -1) const;//是否闰年
    int subDate(const Date & date)const;
    Date subDays(int days)const;
    Date addDays(int days)const;
};
#endif //SM4_PROJECT_DATE_H
