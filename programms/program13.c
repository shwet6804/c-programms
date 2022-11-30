#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the first side of the triangle");
    scanf("%d",&a);
    printf("enter the second side of the triangle");
    scanf("%d",&b);
    c=180-(a+b);
    printf("third side of the triangle is %d",c);
}