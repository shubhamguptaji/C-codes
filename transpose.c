#include<stdio.h>
void main()
{
int m[3][3],n[3][3];
printf("enter the matrx\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
scanf("%d",&m[i][j]);
}
printf("original array is \n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
printf("%d ",m[i][j]);
printf("\n");
}
printf("transpose of array is:\n");
for(int j=0;j<3;j++)
{
for(int i=0;i<3;i++)
printf("%d ",m[i][j]);
printf("\n");
}
}