#include<stdio.h>
void main()
{
int a[50],pos,num,n;
printf("how many elements do you want to enter (less than 49)");
scanf("%d",&n);
printf("enter numbers\n");
for(int i=0;i<n-1;i++)
scanf("%d",&a[i]);
printf("enter the position");
scanf("%d",&pos);
printf("\nenter the number");
scanf("%d",&num);
for(int i=n-1;i>pos-1;i--)
a[i]=a[i-1];
a[pos-1]=num;
for(int i=0;i<n;i++)
printf("%d\n",a[i]);
}