#include <iostream>
#include <string.h>
using namespace std;
int j(char x[],int y)
{     const char m=x[0];
      if(y==strlen(x))
         return 0;
      if(x[y]==m)
      {
        int z=j(x,y+1);
        cout<<y<<' '<<z<<endl;
        return j(x,z+1);

      }
     else
       {
        return y;
       }
}
int main()
{
    char x[100]={'\0'};
    cin.get(x,101);
    int n=j(x,0);
    return 0;
}
