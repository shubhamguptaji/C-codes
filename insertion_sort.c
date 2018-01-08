#include<stdio.h>
void main()
{
int a[100],n,j;
printf("enter the number of elements:\n");
scanf("%d",&n);
printf("enter the elements");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=1;i<n;i++)
{
j=i-1;
while(a[j]>a[i] && j>=0)
{
a[j+1]=a[j];
j--;
}
a[j+1]=a[i];
}
printf("sorted list is:\n");
for(int i=0;i<n;i++)
printf("%d",a[i]);
}