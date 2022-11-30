#include<stdio.h>
int main()
{
    int a=1,b=0;
    if(a)
    b=!a;
    if(b)
    a=!b;
    printf("%d%d",a,b);
}