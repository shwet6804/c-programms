#include<stdio.h>
int main()
{
    float r;
    printf("enter your radius:");
    scanf("%f",&r);
    printf("diameter:%g\n",2*r);
    printf("circumference:%g\n",2*3.14*r);
    printf("area:%g",3.14*r*r);
}