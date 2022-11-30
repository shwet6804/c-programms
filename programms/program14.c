#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the base of the triangle:\n");
    scanf("%d",&a);
    printf("enter the height of the triangle:");
    scanf("%d",&b);
    c=0.5*a*b;
    printf("area of the triangle is: %d",c);
}