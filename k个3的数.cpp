#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int m ,k;
    cin>>m>>k;
    int num=0;
    int r=0;
    int l=m;
    for(int i=4;i>=0;i--){
        l=l-r*(floor(pow(10,i+1)));
        r=l/floor(pow(10,i));
        if(r<1){
            r=0;
        }
        else{
            if(r==3){
                num++;
            }
        }
    }
    if(num!=k){
        cout<<"NO";
    }
    else{
        if(m%19==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}
