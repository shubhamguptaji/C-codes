#include<stdio.h>
void main()
{
int a[50],pos,n;
printf("how many values do you want to enter");
scanf("%d",&n);
printf("enter the numbers");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position");
scanf("%d",&pos);
for(int i=pos-1;i<n;i++)
a[i]=a[i+1];
for(int i=0;i<n-1;i++)
printf("%d\n",a[i]);
}
