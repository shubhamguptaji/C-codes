#include<stdio.h>
#include<math.h>

int fact(int x)
{
    int f = 1;
    while(x)
        f *= x-- ;

    return f;
}

int main()
{
    float x0, y0, y=0, x;
    int c=0;
    printf("Enter initial value of x: ");
    scanf("%f", &x0);
    y0 = exp(x0);

    printf("Enter the value of x at which y is to be calculated: ");
    scanf("%f",&x);
    while(c<4)
    {
        y += y0*pow((x-x0),c)/fact(c);
        c++;
    }
    printf("st x=%2f y=%2f",x,y);

    return 0;
}