#include<stdio.h>
#include<math.h>
int main()
{
int x[100],y[100],xy[100],xsquare[100],ysquare[100];
int i,n,xsum,ysum,xysum,xsqr_sum,ysqr_sum;
float coeff,num,deno;
xsum=ysum=xysum=xsqr_sum=ysqr_sum=0;
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the value of x and y:\n");
for(