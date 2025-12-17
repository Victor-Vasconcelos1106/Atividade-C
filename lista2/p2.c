#include <stdio.h>

int somaMultiplos(int inicio, int fim, int k)
{
    
    if (k == 0 || inicio > fim) {
        return 0;
    }
    
    double soma = 0;
    
    int primeiroMultiplo;
    
    int i;
    
    if (inicio % k == 0)
    {
               
        primeiroMultiplo = inicio;
        
    } else
    {
       
        
        primeiroMultiplo = (inicio / k + 1) * k;
        
    }
    
    for (i = primeiroMultiplo; i <= fim; i += k)
    {
        
        soma += i;
        
    }
    
    return (int)soma;
    
}

int main()
{
 printf("%i",somaMultiplos(1,4,2));
 getchar();
 return 0;
   
}
