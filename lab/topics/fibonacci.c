#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("enter your no:");
    scanf("%d",&n);
printf("%d %d ",a,b);
for (int i = 0; i <=n; i++)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
}
}
