#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
  float x[20],y[20],f,s,h,d,p;
  int j,i,n;
  printf("enter the value of n :");
  scanf("%d",&n);
  printf("enter the elements of x:");
  for(i=1;i<=n;i++)
   {
        scanf("%f",&x[i]);
         }
                   printf("enter the elements of y:");
               for(i=1;i<=n;i++)
               {
              scanf("%f",&y[i]);                  
                                }
  h=x[2]-x[1];
  printf("Enter the value of f:");
  scanf("%f",&f);
s=(f-x[1])/h;
p=1;
d=y[1];                                  
for(i=1;i<=(n-1);i++)
 {
                   for(j=1;j<=(n-i);j++)
                    {
                          y[j]=y[j+1]-y[j];
                             
                    }
                    p=p*(s-i+1)/i;
                    d=d+p*y[1];
 }                         
printf("For the value of x=%6.5f the value of y is %6.5f",f,d);
 getch();
}