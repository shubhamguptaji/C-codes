#include<stdio.h>
void daigonal(int a[3][3])
{
int sum=0;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(i==j)
sum=sum+a[i][j];
}
}
printf("sum of daigonal elements is %d",sum);
}
void main()
{
int a[3][3];
printf("enter the matrix\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
daigonal(a);
}
