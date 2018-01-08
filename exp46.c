#include<stdio.h>
typedef struct
{
float real;
float imag;
}complex;
complex add(complex,complex);
int main()
{
complex n1,n2,sum;
printf("//Addition of complex numbers//\n\n");
printf("Enter first complex number \n");
scanf("%f %f",&n1.real,&n1.imag);
printf("\nEnter second complex number \n");
scanf("%f %f",&n2.real,&n2.imag);
sum=add(n1,n2);
printf("\nSum of given complex numbers ::\n");
printf("%.1f+i%.1f!!\n",sum.real,sum.imag);
}
complex add(complex n1,complex n2)
{
complex sum;
sum.real=n1.real+n2.real;
sum.imag=n1.imag+n2.imag;
return sum;
}
