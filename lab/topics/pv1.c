#include<stdio.h>
int main()
{
int n;
printf("enter a no.");
scanf("%d",&n);
for(int a=1;a<=10;a++)
{
    
    printf("%d x %d=%d \n" ,n,a,n*a);
}
}
