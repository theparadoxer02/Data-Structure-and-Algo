//Encryption
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
 char s[81];
 int len,row,col;
 scanf("%s",s);
 len=strlen(s);
 row=floor(sqrt(len));
 col=ceil(sqrt(len));


for(int j=0;j<col;j++)
{
 for(int i=j;i<len;i=i+col)
 { printf("%c",s[i]);
 }
 printf(" ");
}



}
 