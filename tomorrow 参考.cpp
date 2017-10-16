#include<iostream>
  #include<stdio.h>
  #include<iomanip>
  #include<string.h>
  using namespace std;
  bool IsLeapYear( int year ){
      bool isLeap = false;
      if(( year % 400 == 0)||(year % 4 == 0 && year % 100 != 0))
     isLeap = true;
     return isLeap;
 }

 int main() {
     int year, month, day;
     scanf("%d-%d-%d", &year, &month, &day);

     int month_data[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

     if(day >= month_data[month-1]){
         if( month == 12 ){
            year++;
            month = 1;
             day = 1;
         }
         else if(month == 2 ){
             if(IsLeapYear( year ) && day == 28)
                 day = 29;
             else{
                 month++;
                 day = 1;
             }
         }
         else{
             month++;
             day = 1;
         }

     }
     else
         day++;
     cout<<setw(4)<<year<<"-";//此处设置输出字符宽度为4，后面再输出“-”
     cout<<setw(2)<<setfill('0')<<month;//此处设置输出字符宽度为2，字符数不足的话会被0补充
     cout<<"-"<<setw(2)<<setfill('0')<<day<<endl;//此处先打印“-”，再输出字符宽度为2，不足的由0补充。
     return 0;
 }
