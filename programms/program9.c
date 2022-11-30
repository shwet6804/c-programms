#include<stdio.h>
void main()
{
    int c,f;
    printf("enter temperature in fahrenheit:");
    scanf("%d",&f);
   c=(f-32)*5/9 ;
    printf("your temperature in celsius:%d",c);

}