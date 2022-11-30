#include<stdio.h>
int main()
{
    float l;
    printf("enter your lenth:");
    scanf("%f",&l);
    printf("your length in meter:%g\n",l/100);
    printf("your length in kilometer:%g",l/100000 );
}