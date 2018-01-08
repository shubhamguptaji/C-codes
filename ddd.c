#include<stdio.h>
int BITS(int x)
{
return 1<<x;
}
int main()
{
   int num,bit_po;
   printf("Enter the num to set\n");
   scanf("%d", &num);
   printf("Enter the bit to be set\n");
   scanf("%d", &bit_po);
   num = num | BITS(bit_po);
   printf("after setting the value is %d\n", num);
   printf("Enter the num to reset\n");
   scanf("%d", &num);
   printf("Enter the bit to be reset\n");
   scanf("%d", &bit_po);
   num = num &~ BITS(bit_po);
   printf("after setting the value is %d\n", num);
}