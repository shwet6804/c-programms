//print the factorial of value entered by user.
#include<stdio.h>
int main()
{
    int n;
    printf("enter your no.");
    scanf("%d",&n);
    int fact=1;
    for ( int i = 1; i<=n; i++)
    {
        fact= fact*i;
    }
    printf("factorial:%d",fact);
    
}