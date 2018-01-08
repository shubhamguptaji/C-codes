#include<stdio.h>
#include<string.h>
void main()
{
char str[80],small,large;
printf("enter the string\n");
gets(str);
int len=strlen(str);
small=str[0];
large=str[0];
for(int i=0;i<len;i++)
{
if(str[i]>large)
large=str[i];
else
if(str[i]<small)
small=str[i];
}
printf("largest character is %c\n",large);
printf("smallest character is %c\n",small);
}