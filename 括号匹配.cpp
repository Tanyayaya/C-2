#include <iostream>
#include <string.h>
using namespace std;
bool m;
int j(char x[],int y)
{
    if(strlen(x)==y)
     return (m=true,-1);
    else
    {
      if(x[y]=='(')//一个等号害死一个好汉（泪奔）
      {
        int n=j(x,y+1);
        if(m==false)
            {
                x[n]='?';
                x[y]='$';
                return (m=false,y);
            }
        else
        {
            if(x[n]==')')
               {
                  x[n]='#';
                  x[y]='#';
                  return j(x,n+1);
               }
            else
            {   x[n]='?';
                x[y]='$';
                return (m=false,y);
            }
        }
      }
    else if(x[y]==')')
       {
        return (m=true,y);
       }
    else
      {
        return j(x,y+1);
      }
   }
}
int main()
{
    char x[100]={'\0'};
    while(cin.getline(x,101))
    {
    int n=0;
    cout<<x<<endl;
    n=j(x,0);
    while(n!=-1)
    {if(m==true)
        x[n]='?';
     n=j(x,n+1);
    }
    for(int i=0;i<99;i++)
    {
        if(x[i]=='?')
           x[i]='?';
        else if(x[i]=='$')
            x[i]='$';
        else
            x[i]=' ';
    }
    cout<<x<<endl;
    }
    return 0;
}
