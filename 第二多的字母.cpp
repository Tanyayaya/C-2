#include <iostream>
#include<string.h>
using namespace std;
int main(){
char x[500];
cin>>x;
int count[26][2]={0};
int num=0;
int len=strlen(x);
bool repeat=false;
for(int i=0;i<len;i++){
    int asc=x[i];
    if(96<asc&&asc<123){
      asc=asc-32;
    }
    repeat=false;
    if(64<asc&&asc<91){
      for(int j=0;j<num;j++){
       if(asc==count[j][0]){
        count[j][1]++;
        repeat=true;
        break;
         }
     }
     if(repeat==false){
        count[num][0]=asc;
        count[num][1]=1;
        num++;
     }
    }
}
for(int i=0;i<num;i++){
       for(int j=1;j<num-i;j++){
           if(count[j][1]>count[j-1][1]){
            int temp1=count[j][1];
            count[j-1][1]=count[j][1];
            count[j][1]=temp1;
            int temp0=count[j][0];
            count[j-1][0]=count[j][0];
            count[j][0]=temp0;
           }
       }
}
int place;
for( int i=0;i<num;i++){
    if(count[i][1]!=count[i+1][1])
    {
        place=i+1;
        break;
    }
}
char tsecChar=count[place][0];
char ntsecChar=count[place][0]+32;
cout<<tsecChar<<'+'<<ntsecChar<<':'<<count[place][1];
return 0;
}
