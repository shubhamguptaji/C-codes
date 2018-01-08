#include<stdio.h>
void main()
{
printf("enter the size of matrix");
int n;
scanf("%d",&n);
int a[n][n];
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
int j;
for(int i=0;i<n;i++)
{
j=n-i-1;
printf("%d\n",a[i][j]);
}
}