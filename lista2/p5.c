#include <stdio.h>

int passos(int n)
{
  
    if (n == 1)
    {
          
        return 0;
        
    }


    if (n % 2 == 0)
    {
          
        return 1 + passos(n / 2);
        
    } 

    else
    {

        return 1 + passos(n - 1);
        
    }
}


int main()
{
 int i;
 
 setbuf(stdin,NULL);
 scanf("%i",&i);
  
 printf("\n%i\n",passos(i));
 
 setbuf(stdin,NULL);
 getchar();
 
 return 0;
   
}
