#include<stdio.h>
#include<string.h>
int main()
{
int n;
char a[100];
gets(a);
n=strlen(a);
int count[100]= { 0 } ,k=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(a[i]==a[j])
{
count[k]++;
}
}
k++;
}
for(int i=0;i<n;i++)
printf("%c-%d ",a[i],count[i]);
}