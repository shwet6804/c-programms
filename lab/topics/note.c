#include<stdio.h>
int main()
{
    int  a,t,f,h;
    printf("enter your amount in multiple of 100:\n");
    scanf("%d",&a);
    t=a/2000;
    a=a%2000;
    f=a/500;
    a=a%500;
    h=a/100;
    printf("2000:%d\n500:%d\n100:%d",t,f,h);
    

    
    
}