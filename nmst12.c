#include<stdio.h>
#include<math.h>

int main()
{
    int x[100],y[100],xy[100],xsqr[100],ysqr[100];
    int i,n,xsum,ysum,xysum,xsqr_sum,ysqr_sum;
    float coeff,num,den;
    xsum=ysum=xysum=xsqr_sum=ysqr_sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of x and y:\n");
    for(i=0;i<n;i++)
    {
        printf("x[%d] and y[%d]: ",i,i);
        scanf("%d %d",(x+i),(y+i));
    }
    for(i=0;i<n;i++)
    {
        xy[i] = x[i]*y[i];
        xsqr[i] = x[i]*x[i];
        ysqr[i] = y[i]*y[i];
        xsum+=x[i];
        ysum+=y[i];
        xsqr_sum+=xsqr[i];
        ysqr_sum+=ysqr[i];
    }
    num=1.0*((n*xysum)-(xsum*xsum));
    den=1.0*((n*xsqr_sum-xsum*xsum)*(n*ysqr_sum-ysum*ysum));
    coeff = num/sqrt(den);
    printf("Correlation Coefficient: %2f\n",coeff);
    return 0;
}