//wap to find the hcf and lcm of two given no.
#include<stdio.h>
int main()
{
    int a,b,hcf,lcm,small;
    printf("enter first no: ");
    scanf("%d",&a);
    printf("enter second no.");
    scanf("%d",&b);
    if (a<b)
    small =a;
    else if(b<a)
    small=b;
    else
    hcf=a;
    while (small>0)
    {
        if (a%small==0 && b%small==0)
        {
            hcf=small;
            break;
            small==1;
        }
        lcm=(a*b)/hcf;
        printf("HCF AND LCM OF THE GIVEN 2 NO:%d&%d,hcf,lcm");
    }
    

}