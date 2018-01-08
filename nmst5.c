#include<stdio.h>
#include<math.h>

int fact(int n)
{
    int temp=1;
    while(n)
        temp *= n--;
    return temp;
}

int main()
{
    int i,j,n,size;
    float z;
    printf("Enter total no. of values in table");
    scanf("%d",&n);
    size=n-1;
    float x[n],y[n];
    printf("Values x & y are : ");
    for(i=0;i<n;i++)
        scanf("%f %f",&x[i],&y[i]);
    printf("Enter value of x for which y is found");
    scanf("%f",&z);
    float p=((z-x[n-1])/(x[1]-x[0]));
    float temp=1;
    float value = y[n-1];
    for(j=0;j<n;j++)
    {
        for(i=0;i<size;i++)
        {
            y[i]=y[i+1]-y[i];
            printf("%.2f\t",y[i]);
        }
        printf("\n");
        temp*=(p+j);
        size--;
        value +=(temp/fact(j+1)) * y[size];
    }
    printf("for x=%f value of y is %f\n",z,value);
    
    return 0;
}
