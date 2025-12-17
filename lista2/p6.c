#include <stdio.h>

int somaDivisores(int n, int d) {
   
    if (n <= 1)
    {
          
        return 0;
        
    }
    
    if (d > n / 2)
    {
          
        return 0;
        
    }

    
    if (n % d == 0)
    {
        
        return d + somaDivisores(n, d + 1);
        
    }else
    {
        
        return somaDivisores(n, d + 1);
        
    }
}

int amigos(int a, int b) {

    if (a <= 0 || b <= 0)
    {
          
        return 0;
        
    }

    int soma_a = somaDivisores(a, 1);

    int soma_b = somaDivisores(b, 1);


    if (( soma_a == b) && (soma_b == a))
    {
               
        return 1;
        
    }else
    {
          
        return 0; 
        
    }
}


int main()
{
 
 int a,b;
 
 setbuf(stdin,NULL);
 scanf("%i\n%i",&a,&b);
 
 printf("%i",amigos(a,b));
 
 setbuf(stdin,NULL);
 getchar();
 
 return 0;
   
}
