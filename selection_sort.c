#include<stdio.h>

int main()
{
int n,temp;
printf("enter the size of matrix");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
int min;
for(int j=0;j<n-1;j++)
{
min=j;
for(int i=j+1;i<n;i++)
{
if(a[min]>a[i])
{
min=i;
}
}
if(min!=j)
{
temp=a[j];
a[j]=a[min];
a[min]=a[j];
}
}
printf("sorted list is:\n");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}

