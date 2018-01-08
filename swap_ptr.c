#include<stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("%d %d\n",x,y);

    int* *ptr=&x;
    printf("%d %d\n",ptr,ptr+1);

    printf("%d\n",x-y);
    printf("%d\n",sizeof(x));

    printf("%d %d",*x,*y);    
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swap(&x,&y);

    if(3.0<3)
    printf("lol");

    return 0;
}