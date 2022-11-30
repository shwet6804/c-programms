#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter 1st no.");
    scanf("%d",&a);
    printf("enter 2nd no.");
    scanf("%d",&b);
    printf("enter 3rd no.");
    scanf("%d",&c);
(a>b&&a>c)?printf("a is greater"):(a<b&&b>c)?printf("b is greater"):printf("c is greater");
}