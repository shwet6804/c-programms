#include<stdio.h>
#include<conio.h>
int main()
{

    int marks;
    printf("enter your number(0-100)\n");
    scanf("%d",&marks);
    if (marks>=30)
    {
        printf("pass");
    }
    else{
        printf("fail");
    }
    return 0;
}