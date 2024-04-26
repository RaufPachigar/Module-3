#include <stdio.h>

int main()
{
    int i, j;
    char c='1';

         for (i = 0; i < 5; i++) 
    {
        
        for (j = 0; j <= i; j++) 
        {
            
            printf("%c ",c);
           
            c++;
        }
        printf("\n");
    }
    return 0;
}
