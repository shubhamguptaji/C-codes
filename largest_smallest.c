#include<stdio.h>
void main()
{
int a[50],n,b,c;
printf("how many values do you want to enter");
scanf("%d",&n);
printf("enter the values;");
scanf("%d",&a[0]);
int small=a[0];
int large=a[0];
for(int i=1;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]>large)
{
large=a[i];
b=i;
}
else
if(small>a[i])
{
small=a[i];
c=i;
}
}
printf("largest no. is %d and position is %d",large,b);
printf("smallest no. is %d and position is %d",small,c);
}