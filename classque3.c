#include<stdio.h>
int main()
{
    int a;
    printf("enter your no.");
    scanf("%d",&a);
    a%2==0?printf("no. is even"):printf("no. is odd");
    return 0;
}