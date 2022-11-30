//wap to check given number is magic no. or not.
#include<stdio.h>
int main()
{
    int n,a,sum=0;
    printf("enter your no.:");
    scanf("%d",&n);
    while (n>9)
    {
        while (n>0)
    {
       a=n%10;
       sum=sum+a;
       n=n/10;
    }
    n=sum;
    sum=0;
    }
    if (n==1)
    printf("magic");
    else{printf("not magic");}      
}
