#include<stdio.h>
int main()
{
    int a,b,c=0,d;
    printf("enter your no:");
    scanf("%d",&a);
d=a;
    while (a!=0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;

        
    }
    printf("reverse no:%d",c);
    if (d==c)
    {
        printf("no is palindrome");
    }
    else
    printf("no is not palindrome ");
    
    

}