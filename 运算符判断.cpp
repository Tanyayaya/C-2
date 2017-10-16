#include <iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0;
    char x;
    cin>>a>>x>>b>>x>>c;
    if(c==a+b)
        cout<<'+';
    else if(c==a-b)
        cout<<'-';
    else if (c==a*b)
        cout<<'*';
    else if (c==a/b)
        cout<<'/';
    else if(c==a%b)
        cout<<'%';
    else
        cout<<"error";
    return 0;
}
