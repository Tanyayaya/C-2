#include <iostream>
using namespace std;
int j(int x)
{   int y=0;
    if(x%2!=0&&x!=1)
       {
           y=3*x+1;
           cout<<x<<"*3+1="<<y<<endl;
           j(y);

       }
    else if(x%2==0)
    {
        y=x/2;
        cout<<x<<"/2="<<y<<endl;
        j(y);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int x=0;
    cin>>x;
    j(x);
    cout<<"End"<<endl;
    return 0;

}
