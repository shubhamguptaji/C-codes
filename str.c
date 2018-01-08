#include<stdio.h>
#include<string.h>
void main()
{
char str[80];
gets(str);
int n;
char c;
scanf("%d",&n);
int num=n;
scanf("%s",&c);
int len=strlen(str);
printf("%d",len);
for(int i=len-1;i>num-1;i--)
str[i]=str[i-1];
str[num]=c;
for(int i=0;i<=len+2;i++)
printf("%c",str[i]);
}