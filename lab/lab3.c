//WAP to print the smallest of two given no.s by using only comparision and arithmatic operator.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 1st no:");
    scanf("%d",&a);
    printf(" enter second no:");
    scanf("%d",&b);
    c=a*(a<=b)+b*(b<a);
    printf("%d is smallest.",c);

}