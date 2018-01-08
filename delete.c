#include<stdio.h>
#include<string.h>
int main()
{
char str[100],ch;
scanf("%s",str);
int len=strlen(str);
int loc;
scanf("%d\n",&loc);
for(int i=loc-1;i<len;i++)
{
str[i]=str[i+1];
}
for(int i=0;i<len-1;i++)
{
printf("%c",str[i]);
}
return 0;
}