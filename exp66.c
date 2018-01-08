 #include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,*arr;
printf("Enter no. of elements:");
scanf("%d",&n);
arr=(int*)calloc(n,sizeof(int));
if(arr==NULL)
{
printf("Memory allocation failed:");
}
for(i=0;i<n;i++)
{
printf("arr[%d]= ",i);
scanf("%d",&arr[i]);
}
printf("ARRAY ELEMENTS ARE:");
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
free(arr);
}
