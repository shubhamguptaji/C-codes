#include<stdio.h>
#include<math.h>
float fun(float x)
{
return (float)(sqrt(1-(x*x)));
}
int main()
{
float a,b;
int i=0,n;
printf("enter lower limit,upper limit , n\n");
scanf("%f%f%d",&a,&b,&n);
float h=(b-a)/n;
float x[n+1];
float y[n+1];
printf("Y values are:\n");
while(i<(n+1))
{
x[i]=a+(i*h);
y[i]=fun(x[i]);
printf("%4f\n",y[i]);
i++;
}
printf("\n");
i=1;
float sum1=0,sum2=0;
while(i<n)
{
if(i%2)
sum2=sum2+y[i];
else
sum1=sum1+y[1];
i++;
}
float integral;
integral=h*((y[0]+y[n])+2*sum1+4*sum2)/3;
printf("integral of function = %f",integral);
}