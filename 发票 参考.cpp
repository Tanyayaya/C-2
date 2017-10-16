#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    float sum[6];

    for (int i = 0; i < 3; i++){
        int a;
        cin >> a;
        int n;
        cin >> n;
        for (int j = 0; j < n;j++){
            char b;
            cin >> b;
            float c;
            cin >> c;
            if (b == 'A') {
                sum[a- 1] += c;
                sum[3] += c;
            }
            else if (b == 'B') {
                sum[a - 1] += c;
                sum[4] += c;
            }
            else if (b == 'C') {
                sum[a - 1] += c;
                sum[5] += c;
            }
        }
    }
   cout<<'1'<<' '<<fixed<<setprecision(2)<<sum[0]<<endl;
   cout<<'2'<<' '<<fixed<<setprecision(2)<<sum[1]<<endl;
   cout<<'3'<<' '<<fixed<<setprecision(2)<<sum[2]<<endl;
   cout<<'A'<<' '<<fixed<<setprecision(2)<<sum[3]<<endl;
   cout<<'B'<<' '<<fixed<<setprecision(2)<<sum[4]<<endl;
   cout<<'C'<<' '<<fixed<<setprecision(2)<<sum[5]<<endl;
    return 0;
}
