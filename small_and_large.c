#include<stdio.h>
void main()
{
int a[3][3],large,small;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
small=a[0][0];
large=a[0][0];
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(a[i][j]>large)
large=a[i][j];
else 
if(a[i][j]<small)
small=a[i][j];
}
}
printf("largest no.is %d",large);
printf("smallest no. is %d",small);
}