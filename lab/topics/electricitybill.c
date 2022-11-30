#include<stdio.h>
int main()
{
    int u;
    float c;
    printf("enter your unit\n");
    scanf("%d",&u);
    if (u>0 && u<=200)
    {
c=0.50*u;
printf("%f",c);
    }
    else if (u>200 && u<=400)
    {
c=100+0.65*(u-200);
printf("%f",c);
   }
   else if (u>400 && u<=600)
   {
c=230+0.80*(u-400);
printf("%f",c);
   }
   else if (u>600)
   {
    c=390+1*(u-600);
    printf("%f",c);
   }
   
   }
   
   
    
    
