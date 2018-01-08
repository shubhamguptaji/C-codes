#include<stdio.h>
#include<string.h>
int main()
{
char str[100],visited[100];
int count[100]={0},j=0,k=0,l,flag=0;
printf("enter the string\n");
gets(str);
int len=strlen(str);
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
int max;
for(l=0;l<j;l++)
{
if(l==0 && visited[l]!=' ')
{
max=count[l];
continue;
}
if((max<count[l]) && (visited[l]!=' '))
{
max=count[l];
k=l;
}
}
printf("majority elment is %c and no of times it is repeated is %d",visited[k],count[k]);
}
