#include<stdio.h>
int main()
{
    int a=3;
    int b=++a+a++ +--a;
    printf("value of b is %d",b);
}