#include <stdio.h>

int somaDigitos(int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    int ultimoDigito = n%10;
    int numeroRestante = n / 10;
    
    return ultimoDigito + somaDigitos(numeroRestante);
}

int main()
{
 
 printf("%i\n",somaDigitos(483));
 getchar();
 return 0;
   
}
