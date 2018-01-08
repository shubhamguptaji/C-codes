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
int max=count[0],index=0;
for(int i=0;i<k;i++)
{
if(max<count[i])
{
max=count[i];
index=i;
}
}
printf("majority element is %c and no. of times it occurs is %d",a[index],max);
}