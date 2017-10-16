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
     cout<<setw(4)<<year<<"-";//�˴���������ַ����Ϊ4�������������-��
     cout<<setw(2)<<setfill('0')<<month;//�˴���������ַ����Ϊ2���ַ�������Ļ��ᱻ0����
     cout<<"-"<<setw(2)<<setfill('0')<<day<<endl;//�˴��ȴ�ӡ��-����������ַ����Ϊ2���������0���䡣
     return 0;
 }
