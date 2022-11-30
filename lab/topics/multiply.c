#include<stdio.h>
int main()
{
    int a=31,n,product=0;
    printf("enter no:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        product=product+a;
    }printf("%d",product);
    
    }