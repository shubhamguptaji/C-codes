#include<stdio.h>
#include<math.h>
void main()
{
int d=sizeof(int);
float p=pow(256,d);
printf(“size of int in this compiler: %d\n”,d);
printf(“signed: 0 to %.0f\n”,p);
float p1=p/(-2);
float p2=(p/2)-1;
printf(“unsigned: %.0f to %.0f”,p1,p2);
}
