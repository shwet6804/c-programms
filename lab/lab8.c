#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        int value;
        scanf("%d",&value);
        for (int i = 0; i <n; i++)
        {
            if (value==a[i])
            {
                printf("%dposition\n",i+1);
            }
            
        }
        
    }
    
}