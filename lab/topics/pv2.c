#include<stdio.h>
int main()
{
    int n,rem=0,c=1,sum,r=n;
    printf("enter a no.");
    scanf("%d",&n);
    while(n!=0)
    {
         rem=n%10;
        for(int a=rem;a>=1;a--)
        {
            c=c*a;
        }
        sum=sum+c;
        n/=10;
    }
    if(r==sum)
    printf("strong no.");
    else
    printf("not");
}