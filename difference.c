#include<stdio.h>
void main()
{
int m[3][3],n[3][3],sum[3][3];
printf("enter first matrix:\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
scanf("%d",&m[i][j]);
}
printf("enter next matrix:\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
scanf("%d",&n[i][j]);
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
sum[i][j]=m[i][j]-n[i][j];
}

printf("sum of two array is:\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
printf("%d ",sum[i][j]);
printf("\n");
}
}