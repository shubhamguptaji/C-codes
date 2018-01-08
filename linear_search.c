#include<stdio.h>
void main()
{
int a[10],flag=0,c,n;
printf("enter the numbers\n");
for(int i=0;i<10;i++)
scanf("%d",&a[i]);
printf("enter the number you want to search\n");
scanf("%d",&n);
for(int i=0;i<10;i++)
{
if(a[i]==n)
{
c=i;
flag=1;
break;
}
}
if(flag==1)
printf("number exists and its location is %d ",c);
else
printf("number does not exist\n");
}