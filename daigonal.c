#include<stdio.h>
void daigonal(int a[3][3])
{
printf("daigonal elements are:\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(i==j)
printf("%d\n",a[i][j]);
}
}
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
