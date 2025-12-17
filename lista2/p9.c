#include <stdio.h>

int somaImparesEntre(int x, int y)
{
    int inicio, fim,i;
    int soma = 0;

        
    if (x > y)
    {
                  
        int temp = x;
        inicio = y;
        fim = temp;
        
    }else
    {
         
        inicio = x;
        fim = y;
        
    }
           
    
    for (i = inicio + 1; i < fim; i++)
    {
        
        if (i % 2 != 0)
        {
              
            soma += i;
            
        }
    }

    return soma;
}

int main()
{
    
 int a,b;
 scanf("%i\n%i",&a,&b); 
 printf("%i",somaImparesEntre(a,b));
 setbuf(stdin,NULL);
 getchar();
 return 0;
   
}
