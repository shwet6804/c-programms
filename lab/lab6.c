#include<stdio.h>
int main()
{
    int x,y;
    printf("enter x cordinate:");
    scanf("%d",&x);
    printf("enter y cordinate:");
    scanf("%d",&y);
    if (x==0 && y==0)
    {
        printf("origin");
    }
    
    if (x>=0 && y>0)
    {
        printf("1st cordinate\n");
    }
    if (x>=0&&y<0)
    {
        printf("2nd cordinate\n");
    }
    if (x<0&&y<0)
    {
        printf("3rd cordinate\n");
    
    }
    if (x<0&&y>=0)
    {
        printf("4th cordinate\n");
    }
    if (x==0 && y>0)
    {
        printf("y axis");

    }
    if (x==0 && y<0)
    {
        printf("y axis");

    }if (x>0 && y==0)
    {
        printf("x axis");

    } 
    if (x<0 && y==0)
    {    printf("x axis");

    }
    
    
    
    
    
}