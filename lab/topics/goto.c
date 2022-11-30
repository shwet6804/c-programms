#include<stdio.h>
int main()
{
    int i=1;
    GLA:
    if (i<=5)
    {
        printf("%d\n",i);
        i++;
        goto GLA;
    }
    printf("hello");
}