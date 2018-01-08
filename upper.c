#include<stdio.h>
void main()
{
int a[10][10],n;
printf("enter the number of row or colums");
scanf("%d",&n);
printf("enter matrix");
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("upper triangular matrix is:\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
printf("%d",a[i][j]);
n--;
}
printf("\n");
}
}