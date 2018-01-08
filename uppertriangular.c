#include<stdio.h>
void main()
{
int a[10][10],n;
printf("enter the value of n");
scanf("%d",&n);
printf("enter the matrix\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("entered matrix is:\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
printf("%d ",a[i][j]);
printf("\n");
}
printf("upper triangular matrix is:\n");
for(int i=0;i<n;i++)
{
for(int j=i;j<n;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
for(int k=0;k<=i;k++)
printf("  ");
}
printf("\n");
printf("lower triangular matrix is :\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<=i;j++)
{
printf("%d ",a[i][j]);
}

printf("\n");
}
}
