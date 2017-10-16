# include<iostream>
using namespace std;
int main()
{
    int col,row;
    cin>>row>>col;
    int x[100][100]={0};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
       {
           cin>>x[i][j];
       }
    }
    for(int i=0;i<col;i++)
    {
      for(int j=0;j<row;j++)
      {
        if(i-j>=0)
            cout<<x[j][i-j]<<endl;
        else
            break;
      }
    }
    for(int i=1;i<row;i++)
    {
      for(int j=i;j<row;j++)
      {  if(col-1+i-j>=0)
       {
           cout<<x[j][col-1+i-j]<<endl;
       }
         else
            break;
      }
    }
    return 0;
}
