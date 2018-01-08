#include<stdio.h>
void main()
{
int a[10];
for(int i=0;i<10;i++)
scanf("%d",&a[i]);
for(int i=0;i<10;i=i+2)
printf("%d",a[i]);
}