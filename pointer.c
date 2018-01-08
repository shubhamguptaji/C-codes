#include<stdio.h>
void print(int a[100],int n)
{
printf("the entered elements are:\n");
for(int i=0;i<n;i++)
printf("%d\n",a[i]);
}
void main()
{
int n,a[100];
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
void (*ptr)(int,int) = print;
ptr(a,n);
}