#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],k;int state=0,wc=0;
    printf("Enter the sentence\n");
    gets(s);
    printf("%s\n",s);
    while(*s)
    {
        printf("%s",s);
    if(*s==' '||*s=='\n'||*s=='\t')
    state=0;
    else
    if(state==0)
    {
        state=1;
        ++wc;
    }
    ++*s;
    }
    printf("No of words:%d",wc);
    return 0;
}
