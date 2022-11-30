#include<stdio.h>
void main()
{
    int a,b,ch,r;
    printf("Press 1 to add\n");
    printf("Press 2 to sub\n");
    printf("Press 3 to divide\n");
    printf("Press 4 to multiply\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        r=a+b;
        printf("%d",r);
    }
    else if(ch==2) 
    {
        scanf("%d",&a);
        scanf("%d",&b);
        r=a-b;
        printf("%d",r);
    }
    else if(ch==3)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        r=a*b;
        printf("%d",r);
    } 
    else if(ch==4)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        r=a/b;
        printf("%d",r);
    }
}