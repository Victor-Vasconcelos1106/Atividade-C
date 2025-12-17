#include <stdio.h>

void reduz(int *a, int *b, int *operacoesPtr)
{
    
    if (*a == *b)
    {
           
        return;
        
    }

   
    (*operacoesPtr)++;

    if (*a > *b)
    {
        
        *a = *a - *b;
        reduz(a, b, operacoesPtr);
        
    }else
    {
         
        *b = *b - *a;
        reduz(a, b, operacoesPtr);
        
    }
    
   
}

int main()
{
    
 int counter,a,b;
 scanf("%i\n%i",&a,&b);
 
 reduz(&a,&b,&counter);
 printf("%i",counter);
 
 setbuf(stdin,NULL);
 getchar();
 
 return 0;
   
}
