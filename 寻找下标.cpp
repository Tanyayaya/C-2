#include <iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    int x[n]={0};
    bool y=false;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];

    }
    for(int i=0;i<n;i++)
    {
        if(x[i]==i)
        {
            y=true;
            cout<<i;
            break;
        }
    }
    if(!y)
    {
        cout<<"N";
    }
    return 0;
}
