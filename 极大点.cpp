#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int point[101][2];
    for(int i=0;i<n;i++){
        cin>>point[i][0]>>point[i][1];
    }

    int max[101][2];
    int num=0;
    for(int i=0;i<n;i++){
        bool isnot=false;//��䲻�ܷ���ѭ�����棻��������ѭ��ĩβ���ϡ�isnot=false"��isfalse��ֵ�ûس�ʼֵ
        for(int j=0;j<n;j++){
            if(point[j][0]-point[i][0]>=0&&point[j][1]-point[i][1]>=0&&i!=j)
                {
                  isnot=1;
                  break;
                }
        }
        if(isnot==0){
            max[num][0]=point[i][0];
            max[num][1]=point[i][1];
            num++;}
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<num-i;j++){
            if(max[j][0]>max[j+1][0]){
                int temp=max[j][0];
                max[j][0]=max[j+1][0];
                max[j+1][0]=temp;
                temp=max[j][1];
                max[j][1]=max[j+1][1];
                max[j+1][1]=temp;
            }
        }
    }
    for(int i=0;i<num-1;i++){
        cout<<'('<<max[i][0]<<','<<max[i][1]<<')'<<',';
    }
       cout<<'('<<max[num-1][0]<<','<<max[num-1][1]<<')';
       return 0;
}
