#include <stdio.h>
int sum(int a, int b);
int subtract(int a, int b);
int mul(int a, int b);
int div(int a, int b); 
int (*p[4]) (int x, int y); 
int main() 
{
int result;
int i, j, op; 
p[0] = sum; 
p[1] = subtract; 
p[2] = mul; 
p[3] = div;
printf("Enter two numbers: ");
scanf("%d %d", &i, &j);
for(op=0;op<4;op++)
{ 
result = (*p[op]) (i, j);
printf("%d\n", result);
}
return 0;
}
int sum(int a, int b)
{ 
printf("Sum: ");
return a + b;
} 
int subtract(int a, int b) 
{ 
printf("Difference: ");
return a - b;
} 
int mul(int a, int b)
{
printf("Product: ");
return a * b;
}
int div(int a, int b)
{
printf("Division: ");
if(b) 
return a / b;
else 
return 0;
}
