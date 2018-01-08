#include<stdio.h>
int fact(int n);
int main()
{
    int i,j,n,size;
    float z;
    printf("Enter the total no. of values in table");
    scanf("%d",&n);
    size=n-1;
    float x[n],y[n];
    printf("Values of x and y are\n");
    for(i=0;i<n;i++)
    {
        scanf("%f%f",&x[i],&y[i]);
    }
    printf("Enter the value of x for which y is to be found:");
    scanf("%f",&z);
    float p=(z-x[size])/(x[1]-x[0]);
    float temp=1;
    float value=y[n-1];
    for(j=0;j<=size;j++)
    {
        for(i=0;i<size;i++)
        {
            y[i]=y[i+1]-y[i];
            printf("%0.2f\t",y[i]);
        }
        printf("\n");
        temp=temp*(p+j);
        size=size-1;
        value=value+(temp/fact(j+1)*y[size]);
    }
    printf("For x=%f value of y=%f",z,value);
    return 0;
}
int fact(int n)
{
    int temp=1;
    while(n)
    {
        temp*=n--;
    }
    return temp;
}
