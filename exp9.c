#include<stdio.h>
#include<math.h>
int fact(int x)
{
int j=1;
while(x)
{
j=j*x--;
}
return j;
}
int main()
{
float x0,y0,y=0,x;
int c=0;
printf("enter initial value\n");
scanf("%f",&x0);
y=exp(x0);
printf("enter the value of x at which y is to be calculated");
scanf("%f",&x);
while(c<4)
{
y=y+pow((x-x0),c)/fact(c)*y0;
c++;
}
printf("at x=%2f,y=%2f",x,y);
}