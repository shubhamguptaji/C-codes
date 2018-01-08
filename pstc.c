#include<stdio.h>
#include<string.h>
void func(char str[])
{
char visited[100];
int len=strlen(str);
int count[100]={0},j=0,k=0;
int flag=0;
for(int i=0;i<len;i++)
{
if(i==0)
{
visited[j++]=str[i];
count[j-1]++;
}
else
{
for(k=0;k<j;k++)
{
if(str[i]==visited[k])
{
count[k]++;
flag=1;
}
}
if(flag==0)
{
visited[j++]=str[i];
count[j-1]++;
}
flag=0;
}
}
for(int m=0;m<j;m++)
{
if(visited[m]>='a' && visited[m]<='z')
{
m++;
continue;
}
else
{
printf("%c- ",visited[m]);
printf("%d ",count[m]);
}
}
}
int main()
{
char str[100];
printf("enter the string\n");
gets(str);
func(str);
}