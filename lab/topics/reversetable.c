#include<stdio.h>
int main()
{
    int n,i;
    printf("enter your no.");
    scanf("%d",&n);
    for (int i = 10; i>=1; i--)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    
}