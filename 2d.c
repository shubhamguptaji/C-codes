#include<stdio.h>
#include<string.h>
void main()
{
int n;
char str[50];
gets(str);
int len=strlen(str);
char c;
for(int i=0;i<len-1;i++)
{
for(int j=0;j<len-1;j++)
{
if(str[j]>str[j+1])
{
c=str[j+1];
str[j+1]=str[j];
str[j]=c;
}
}
}
puts(str);
}