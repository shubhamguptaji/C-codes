#include<stdio.h>
void main()
{
char str[100];
printf("enter the string\n");
gets(str);
int i=0,count=0;
while(str[i]!='\0')
{
count++;
i++;
}
printf("length of the entered string is:%d",count);
}