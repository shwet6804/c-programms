#include<stdio.h>
int main()
{
    int i;
    for (int i = 1; i <=5; i++)
    {
        if (i == 3)
        {
            continue;//skip anything
        }
        
        printf("%d\n",i);
    }
    
}