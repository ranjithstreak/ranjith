#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before swap:%d,%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swap:%d,%d",a,b);
}
