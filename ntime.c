#include <stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int a,i;
    printf("Enter the string:\n");
    gets(*s);
    printf("Enter the times for printing;\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    puts(*s);
    return 0;
}
