#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char x[n][255];
    for(int i=0;i<n;i++)
    {   cin>>x[i];
        int len= strlen(x[i]);
        for(int j=0;j<len;j++)
        {
            switch(x[i][j]){
            case 'A' : x[i][j]='T';break;
            case 'G' : x[i][j]='C';break;
            case 'T' : x[i][j]='A';break;
            case 'C' : x[i][j]='G';break;
            default  : x[i][j]='\0';break;
           }
        }
    }
    for(int i=0;i<n;i++){
        cout<<x[i]<<endl;
    }
    return 0;
}
