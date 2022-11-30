#include<stdio.h>
int main()
{
    int i=1,j;
    for (; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (i==j)
            
              break; 
                printf("%d%d\n",i,j);
                
            
            
        }
        
    }
    
}