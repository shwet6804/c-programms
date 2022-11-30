//keep taking numbers as a input from user until user enters a odd number.
#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("enter your no.");
        scanf("%d",&n);
        printf("%d\n",n);
        if (n % 2 !=0)
        {
        break;
        }
        
    } while (1); 
    printf("thank you");
}