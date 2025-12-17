#include <stdio.h>
#include <stdbool.h>

bool primeiroFator = true;

void fatoresPrimos(int n, int divisor) {
    
    if (n == 1)
    {
          
        return;
        
    }

   
    if (n % divisor == 0)
    {
        
       
        if (!primeiroFator)
        {
                           
            printf(" x ");
            
        } else
        {
              
            primeiroFator = false;
            
        }

      
        printf("%d", divisor);

     
        fatoresPrimos(n / divisor, divisor);
        
    } else
    {
       
        fatoresPrimos(n, divisor + 1);
        
    }
}



void decompor(int n) {
    if (n <= 1)
    {
          
        printf("%d = %d\n", n, n);
        return;
        
    }
    
    
    bool primeiroFator = true;
    printf("%d = ", n);
    
  
    fatoresPrimos(n, 2);
    
    printf("\n");
    
}

int main()
{
    
 decompor(6);
 getchar();
 return 0;
   
}
