#include<iostream>
using namespace std;

int main()
{
    int d,h,p,t;
       //遍历所有可能的四大湖排名情况
    for(d=1; d<=4; d++) {
        for(h=1; h<=4; h++) {
              for(p=1; p<=4; p++) {
                for(t=1; t<=4; t++)
                    {
                     if(d!=h&&d!=p&&d!=t&&h!=p&&h!=t&&p!=t) //保证每个湖的排名大小不同
                     if((d==1)+(h==4)+(p==3)==1)
                     if((d==4)+(h==1)+(p==2)+(t==3)==1)
                     if((h==4)+(d==3)==1)
                     if((d==3)+(h==2)+(p==1)+(t==4)==1)
                     if(h+t+d+p==10)
                     {
                      cout << p<< endl << d<< endl << t << endl << h<< endl;

                     }
                    }
                }
               }
          }
return 0;
}

