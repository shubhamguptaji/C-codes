#include<stdio.h>
#include<string.h>
void main()
{
char str[80];
int pos;
printf("enter the string\n");
gets(str);
printf("enter the position\n");
scanf("%d",&pos);
int len=strlen(str);
for(int i=pos-1;i<len;i++)
str[i]=str[i+1];
for(int i=0;i<len-1;i++)
printf("%c",str[i]);
}