#include<stdio.h>
#include<string.h>
void main()
{
char str[80],search[80];
gets(str);
gets(search);
int len=0,sublen=0;
while(str[len]!='\0')
len++;
while(search[sublen]!='\0')
sublen++;
int flag=0,k,l=0;
for(int i=0;i<len;i++)
{
for(int j=i;j<i+sublen;j++)
{
flag=1;
k=i;
if(str[j]!=search[j-i])
{
flag=0;
break;
}
}
if(flag==1)
break;
}
if(flag==1)
printf("%d",k);
else
printf("Not Found");
}
