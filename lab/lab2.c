#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    age>=18 && printf("eligible to vote");
    age<18 && printf(" not eligible to vote");      
}