#include<stdio.h>
#include<string.h>
void main()
{
char str[80];
printf("enter the string\n");
gets(str);
int count=0,len=strlen(str);
for(int i=0;i<len;i++)
{
if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
{
count++;
for(int j=i;j<len;j++)
str[j]=str[j+1];
}
}
for(int i=0;i<len-count;i++)
printf("%c",str[i]);
}