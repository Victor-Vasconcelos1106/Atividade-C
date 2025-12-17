#include <stdio.h>
int somaDiv(int n, int d)
{
  
    if (d > n / 2)
    {
          
        return 0;
        
    }


    if (n % d == 0)
    {

        return d + somaDiv(n, d + 1);
        
    } else
    {

        return somaDiv(n, d + 1);
        
    }
}

int ehPerfeito(int n)
{
  
    if (n <= 1)
    {
          
        return 0;
        
    }

    int somaDosDivisores = somaDiv(n, 1);

    if (somaDosDivisores == n)
    {
                     
        return 1;
        
    } else
    {
      
        return 0;
        
    }
    
}
int main()
{
    
 printf("%i",ehPerfeito(6));
 getchar();
 return 0;
   
}
