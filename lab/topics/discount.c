#include<stdio.h>
int main()
{
    int amt;
    printf("enter your amount:");
    scanf("%d",&amt);
    if (amt>1000)
    {
        printf("%d",amt-90);
    }
    else{printf("your amount :%d",amt);}
    
}