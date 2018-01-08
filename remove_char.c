#include<stdio.h>
#include<string.h>
void main()
{
char str[80];
printf("enter the string\n");
gets(str);
int n=strlen(str);
for(int i=0;i<n;i++)
{
if(str[i]<'a' || str[i]>'z')
{
for(int j=i;j<n;j++)
str[j]=str[j+1];
n--;
i--;
}
}
printf("string with only aplphabets is:\n");
for(int i=0;i<n;i++)
printf("%c",str[i]);
}