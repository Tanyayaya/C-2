#include <iostream>
using namespace std;
int main()
{
    int m,n,num=0;
    cin>>m>>n;
    int x[m][n];
    int top[m*n][2];
    int avr=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>x[i][j];
        }
    }
     for(int i=1;i<m-1;i++){
        for(int j=1;j<n-1;j++){
          if(x[i][j]>=x[i-1][j]&&x[i][j]>=x[i+1][j]&&x[i][j]>=x[i][j-1]&&x[i][j]>=x[i][j+1])
          {
            top[num][0]=i;
            top[num][1]=j;
            num++;
          }
        }
     }
    int i=0;
    for(int j=1;j<n-1;j++){
        if(x[i][j]>=x[i][j-1]&&x[i][j]>=x[i][j+1]&&x[i+1][j]<=x[i][j]){
            top[num][0]=i;
            top[num][1]=j;
            num++;}
    }
    i=m-1;
    for(int j=1;j<n-1;j++){
            if(x[i][j]>=x[i][j-1]&&x[i][j]>=x[i][j+1]&&x[i-1][j]<=x[i][j]){
            top[num][0]=i;
            top[num][1]=j;
            num++;}
    }
    int j=0;
    for(int i=1;i<m-1;i++){
          if(x[i][j]>=x[i-1][j]&&x[i][j]>=x[i+1][j]&&x[i][j+1]<=x[i][j]){
            top[num][0]=i;
            top[num][1]=j;
            num++;}
          }
    j=n-1;
    for(int i=1;i<m-1;i++){
          if(x[i][j]>=x[i-1][j]&&x[i][j]>=x[i+1][j]&&x[i][j-1]<=x[i][j]){
            top[num][0]=i;
            top[num][1]=j;
            num++;}
            }
if(x[0][0]>=x[0][1]&&x[0][0]>=x[1][0]){
    top[num][0]=0;
    top[num][1]=0;
    num++;}
if(x[0][n-1]>=x[0][n-2]&&x[0][n-1]>=x[1][n-1]){
    top[num][0]=0;
    top[num][1]=n-1;
    num++;}
if(x[m-1][0]>=x[m-1][1]&&x[m-1][0]>=x[m-2][0]){
    top[num][0]=m-1;
    top[num][1]=0;
    num++;}
if(x[m-1][n-1]>=x[m-1][n-2]&&x[m-1][n-1]>=x[m-2][n-1]){
    top[num][0]=m-1;
    top[num][1]=n-1;
    num++;}
for(i=0;i<num;i++){
        for( j=1;j<num;j++){
            if(top[j][0]<top[j-1][0]){
                int temp0=top[j][0];
                int temp1=top[j][1];
                top[j][0]=top[j-1][0];
                top[j][1]=top[j-1][1];
                top[j-1][0]=temp0;
                top[j-1][1]=temp1;
            }
            else if(top[j][0]==top[j-1][0]){
                if(top[j][1]<top[j-1][1]){
                    int temp1=top[j][1];
                    top[j][1]=top[j-1][1];
                    top[j-1][1]=temp1;
                }
            }
        }
     }
     for(i=0;i<num;i++){
                cout<<top[i][0]<<' '<<top[i][1]<<endl;
        }

return 0;
}
