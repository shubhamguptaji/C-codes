#include<stdio.h>
int main()
{
struct value
{
int bit1:2;
int bit2:3;
int bit3:4;
int bit4:4;
}bit={1,5,8,10};
printf("%d",bit.bit3);
return 0;
}