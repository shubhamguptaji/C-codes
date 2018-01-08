#include<stdio.h>
void main()
{
int a[50],temp,n;
printf("how many values do you want to enter");
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted list is:\n");
for(int i=0;i<n;i++)
printf("%d\n",a[i]);
}
