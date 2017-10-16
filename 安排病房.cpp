#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int m;
    float a;
    cin>>m>>a;
    int num[m];
    double ill[m];
    int ser[m];
    int n=0;
    for(int i=0;i<m;i++){
        cin>>num[i]>>ill[i];
        if(ill[i]-a>=0){
            ser[n]=i;
            n++;
        }

    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            int k=ser[j];
            int bk=ser[j-1];
            if(ill[k]>ill[bk]){
                int temp=ser[j];
                ser[j]=ser[j-1];
                ser[j-1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
         int k=ser[i];
         cout<<setfill('0')<<setw(3)<<num[k];
         cout<<' '<<fixed<<setprecision(1)<<ill[k]<<endl;
    }
    if(n==0){
        cout<<"None.";
    }
    return 0;
}
