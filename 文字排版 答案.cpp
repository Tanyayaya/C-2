#include <iostream>
#include <string.h>
using namespace std;
#define MAX 40 /* 最大单词长度 */
#define LINE 80 /* 一行的宽度 */
int main()

{

int i, n, len; /* 循环相关变量 */

int end = 0; /* 下一个单词（或空格）输出的位置 */

char word[MAX+1]; /* 单词字符数组 */

cin>>n; /* 读入单词数目n */
cin.get();
for (i = 0; i < n; i++)
{ /* 循环n次 */

 cin>>word; /* 每次读入一个单词 */

 len = strlen(word); /* 求得单词字符串的长度 */

/* 在当前行上，再输出一个单词（包括前面的空格）后是否超限 */

if (end + len+1 > LINE)
{
   cout<<endl; /* 超出LINE个字符限制时，换行 */
   end = 0; /* 下一个单词输出的位置归0 */
}
/* 第一个单词前不加空格 */
else if(i > 0)
{
   cout<<' '; /* 其余单词前要加空格 */
   end++; /* 更新到下一个单词输出的位置 */
}
   cout<<word; /* 输出单词 */
   end += len; /* 更新到下一个空格输出的位置 */
}
return 0;

}


