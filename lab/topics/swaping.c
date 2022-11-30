#include<stdio.h>
int main()
{
    int a=5,b=6,c;
    printf("before swapping:%d,%d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping:%d,%d",a,b,c);
    return 0;

}