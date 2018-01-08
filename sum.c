#include<stdio.h>
void add(int a[10])
{
int sum;
for(int i=0;i<10;i++)
sum=sum+a[i];
printf("%d",sum);
}
void main()
{
int a[10];
printf("enter values\n");
for(int i =0;i<10;i++)
scanf("%d",&a[i]);
add(a);
}
