#include<stdio.h>
int main()
{
    int c,f;
    printf("enter temperature in celsius:");
    scanf("%d",&c);
    f=(c*9/5)+32;
    printf("your temperature in fahrenheit:%d",f);
    return 0;   
}