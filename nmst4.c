#include<stdio.h>
#include<math.h>

float xval(float y, float z)
{
    return (17+ 2*z - y)/20;
}

float yval(float x, float z)
{
    return (-18 + z - 3*x)/20;
}

float zval(float x, float y)
{
    return (25- 2*x + 3*y)/20;
}

int main()
{
    float x=0,y=0,z=0;
    float deci=0.000001;
    float x1,y1,z1;
    while(1)
    {
        x1=xval(y,z);
        y1=yval(x,z);
        z1=zval(x,y);

        if(fabs(x-x1)<deci && fabs(y-y1)<deci && fabs(z-z1)<deci)
        {
            break;
        }
        else
        {
            x=x1;
            y=y1;
            z=z1;
        }
        printf("x = %f\ty = %f\tz = %f\n",x1,y1,z1);
    }
    printf("\nFinal vals:\nx = %f\ty = %f\tz = %f\n",x1,y1,z1);
    
    return 0;
}
