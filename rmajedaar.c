#include<stdio.h>
#include<math.h>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int rotations,range[n][2],index;
    scanf("%d",&rotations);
    for(int i=0;i<rotations;i++)
        for(int j=0;j<2;j++)
            scanf("%d",&range[i][j]);
    scanf("%d",&index);
    int c,b;
    for(int i=0;i<rotations;i++)
    {
            c=range[i][0];
            b=range[i][1];
        int temp=a[b];
        for(int i=b;i>c;i--)
        {
            a[i]=a[i-1];
        }
         a[c]=temp;   
     }
    printf("%d",a[index]);
    return 0;
}