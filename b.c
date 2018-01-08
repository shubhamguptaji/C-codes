#include<stdio.h>
#include<string.h>
void main()
{
char str[80],ch;
int pos;
printf("enter the string\n");
gets(str);
printf("enter the character\n");
scanf("%c",&ch);
printf("enter the position\n");
scanf("%d",&pos);
int len=strlen(str);
for(int i=len-1;i>=pos-1;i--)
{
str[i+1]=str[i];
}
str[pos-1]=ch;
for(int i=0;i<len+1;i++)
printf("%c",str[i]);
}