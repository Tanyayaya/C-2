#include <iostream>
#include <string.h>
using namespace std;
#define MAX 40 /* ��󵥴ʳ��� */
#define LINE 80 /* һ�еĿ�� */
int main()

{

int i, n, len; /* ѭ����ر��� */

int end = 0; /* ��һ�����ʣ���ո������λ�� */

char word[MAX+1]; /* �����ַ����� */

cin>>n; /* ���뵥����Ŀn */
cin.get();
for (i = 0; i < n; i++)
{ /* ѭ��n�� */

 cin>>word; /* ÿ�ζ���һ������ */

 len = strlen(word); /* ��õ����ַ����ĳ��� */

/* �ڵ�ǰ���ϣ������һ�����ʣ�����ǰ��Ŀո񣩺��Ƿ��� */

if (end + len+1 > LINE)
{
   cout<<endl; /* ����LINE���ַ�����ʱ������ */
   end = 0; /* ��һ�����������λ�ù�0 */
}
/* ��һ������ǰ���ӿո� */
else if(i > 0)
{
   cout<<' '; /* ���൥��ǰҪ�ӿո� */
   end++; /* ���µ���һ�����������λ�� */
}
   cout<<word; /* ������� */
   end += len; /* ���µ���һ���ո������λ�� */
}
return 0;

}


