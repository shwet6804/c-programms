#include<stdio.h>
int main()
{
    int a;
    printf("enter your no.");
    scanf("%d",&a);
    a%6==0||a%7==0?printf("no. is divisible"):printf("no is not divisible");
    return 0;
}