#include<stdio.h>
void main()
{
    int a,b,h,g;
    printf("enter heads:");
    scanf("%d",&a);
    printf("enter legs:");
    scanf("%d",&b);
    h=b/4;
    g=a-h;
    printf("no. of goat is: %d\n", h);
    printf("no. of hen is: %d",g);
}