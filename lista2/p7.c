#include <stdio.h>

int inverte(int n, int acumulador)
{
   
    if (n == 0)
    {
          
        return acumulador;
        
    }

    int ultimoDigito = n % 10;
    
    
    int novoAcumulador = acumulador * 10 + ultimoDigito;
    
 
    return inverte(n / 10, novoAcumulador);
    
}

int ehPalindromo(int n)
{
   
    if (n < 0)
    {
          
        return 0;
        
    }
    
    int n_invertido = inverte(n, 0);

    
    if (n == n_invertido)
    {
          
        return 1;
        
    }else
    {
          
        return 0;
        
    }
}


int main()
{

 int n;
 
 setbuf(stdin,NULL);
 scanf("%i",&n);
 
 printf("%i",ehPalindromo(n));
 
 setbuf(stdin,NULL);
 getchar();
 
 return 0;
   
}
