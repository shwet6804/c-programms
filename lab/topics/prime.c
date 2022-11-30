#include<stdio.h>
int main()
{
    int i=2,num;
    printf("enter value:");
    scanf("%d",&num);
 while(i<(num-1))
 {
    if(num%i==0)
    {
        printf("p");
        break;}
    
    i++;}
     
      if (num==i)
    {
    
    
        printf("prime");
    }}

