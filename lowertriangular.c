#include<stdio.h>
void main()
{
int a[10][10],n;
printf("enter the number of rows or columns\n");
scanf("%d",&n);
printf("enter the matrix\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
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
