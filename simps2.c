#include<stdio.h>
#include<math.h>
float fun(float x)
{
return (1/(1+(x*x)));
}
int main()
{
float a,b;
int n;
printf("enter upper limit,lower limit,valure of n\n");
scanf("%f%f%d",&a,&b,&n);
float x[n+1],y[n+1];
int i=0;
float h=(b-a)/n;
while(i<(n+1))
{
x[i]=a+i*h;
y[i]=fun(x[i]);
i++;
}
float sum1=0,sum2=0;
i=1;
while(i<n)
{
if(i%3==0)
sum1=sum1+y[i];
else
sum2=sum2+y[i];
i++;
}
float integral =(3*h*((y[0]+y[n])+2*sum1+3*sum2))/8;
printf("value of integral= %f\n",integral);
}