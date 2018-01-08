#include<stdio.h>
#include<math.h>

float func(float x, float y)
{
    return ((3*x)+y);
}

int main()
{
    float x0,y0,x,y,h=0.1;
    printf("Enter the initial values of x & y: ");
    scanf("%f %f",&x0,&y0);
    printf("Enter the value of x to calculate y: ");
    scanf("%f",&x);
    y = y0;
    while(x0<x)
    {
        y+=h*func(x0,y0);
        x0 += h;
    }
    printf("\nAt x=%f y=%f",x,y);

    return 0;
}