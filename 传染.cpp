#include <iostream>
using namespace std;
int main()
{
    int n,m,N=0;
    cin>>n;
    char a[n][n]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
         cin>>a[i][j];
        }
    }
    cin>>m;
    for(int d=0;d<m-1;d++)
      {
        for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
            if(a[i][j]=='@')
            {
               if(a[i-1][j]=='.'&&i>=1)
                  a[i-1][j]='$';
               if(a[i+1][j]=='.'&&i<=n-2)
                  a[i+1][j]='$';
               if(a[i][j+1]=='.'&&j<=n-2)
                  a[i][j+1]='$';
               if(a[i][j-1]=='.'&&j>=1)
                  a[i][j-1]='$';
       }
     }
   }
   //���¸�Ⱦ���˱�ǳɿ��Լ�����Ⱦ����
        for(int i=0;i<n;i++)
        {
                 for(int j=0;j<n;j++)
                 {
                     if(a[i][j]=='$')
                        a[i][j]='@';
                 }
       }
    }
   //ͳ�ƻ�������
   for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
                if(a[i][j]=='@')
                  N++;
           }
       }
    cout<<N;
    return 0;
}
