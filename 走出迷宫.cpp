#include <iostream>
using namespace std;
int maxcolumn;
int maxline;
char x[100][100];
int FindNeighbor(char x,int i,int j)
{
    if(maxline>i>=0&&maxcolumn>j>=0&&x=='.'){
        return 1;
    }
    else if(maxline>i>=0&&maxcolumn>j>=0&&x=='T'){
        return 2;
    }
    else{
        return 3;
    }
}
int OutofMaze(char (*x)[100],int i,int j){
    int minstep=10000;
    for(int Neighbor0=i-1;Neighbor0<i+2;Neighbor0=Neighbor0+2){
      for(int Neighbor1=j-1;Neighbor1<j+2;Neighbor1=Neighbor1+2){
        if(FindNeighbor(x[Neighbor0][Neighbor1],Neighbor0,Neighbor1)==1){
                    int step=OutofMaze(x[Neighbor0],Neighbor0,Neighbor1)++;
                    if(step<minstep){
                            minstep=step;
                         }
                    return minstep;
       }
       else if(FindNeighbor(x[Neighbor0],Neighbor0,Neighbor1)==2){
            return 1;
       }
      }
    }
}
int main(){
 cin>>maxline>>maxcolumn;
 for(int i=0;i<maxline;i++){
    cin>>x[i];
}
int minstep=0;
for(int i=0;i<maxline;i++){
    for(int j=0;j<maxcolumn;j++){
        if(x[i][j]=='S'){
          minstep=OutofMaze(x[i],i,j);
        }
    }
}
cout<<minstep;
return 0;
}
