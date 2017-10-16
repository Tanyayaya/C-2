#include <iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    double a[n]={0};
    int b[n]={0};
    int n1,n2,n3;
    for(int i=0;i<n;i++)
       {
        cin>>n1>>n2>>n3;
        a[i]=(double)n3/n2;
        b[i]=n1;
       }
   for (int i = 0; i < n - 1; i++) {
      for (int j = 1; j < n - i; j++) {
        if (a[j - 1] > a[j])
        {
          double temp = a[j];
          a[j] = a[j - 1];
          a[j - 1] = temp;
          int t=b[j];
          b[j]=b[j-1];
          b[j-1]=t;
        }
      }
    }
    double max=0;
    int maxi=0;
    for(int i=0;i<n-1;i++)
    {
     if(a[i+1]-a[i]>max)
     {
         max=a[i+1]-a[i];
         maxi=i;
     }
    }
    cout<<n-1-maxi<<endl;
    for(int i=maxi+1;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
    cout<<maxi+1<<endl;
    for(int i=0;i<maxi+1;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}

