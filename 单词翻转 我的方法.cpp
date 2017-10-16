#include <iostream>
using namespace std;
void rev(char x[],int y)
{
        char temp=x[0];
         x[0]=x[y-1];
         x[y-1]=temp;
         if(y-2>=2)
         {
            char z[y-2];
            for(int i=1;i<y-1;i++)
            {
               z[i-1]=x[i];
            }
             rev(z,y-2);
         }
         return;//此处的return 不是必需
}
int main()
{
    char sentence[500]={'\0'};
    cin.get(sentence,500,'\n');
    int last=0;
    int num=0;
    for(int i=0;i<500;i++)
       {
           if(sentence[i]==' ')
          {
           char word[i-last];
           for(int j=last;j<i;j++)
           {
               word[j-last]=sentence[j];
           }
           rev(word,i-last);
           for(int j=last;j<i;j++)
           {
               sentence[j]=word[j-last];
               cout<<sentence[j];
           }
           cout<<' ';
           last=i+1;
        }
        if(sentence[i]=='\0')
         {
           char word[i-last];
           for(int j=last;j<i;j++)
           {
               word[j-last]=sentence[j];
           }
           rev(word,i-last);
           for(int j=last;j<i;j++)
           {
               sentence[j]=word[j-last];
               cout<<sentence[j];
           }
           break;
         }
        }
    return 0;
}
