#include<stdio.h>
void main()
{
    int a;
    printf("enter your no.");
    scanf("%d",&a);
    a>0?printf("no. is positive"):a==0?printf(" no is 0"):printf("no. is negative");
}