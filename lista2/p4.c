#include <stdio.h>
 
 void minMax(int a, int b, int c, int *min, int *max)
 {
    
    *min = a;
    *max = a;

    if (b < *min)
    {
          
        *min = b;
        
    }
    
    if (c < *min)
    {
          
        *min = c;
        
    }

    if (b > *max)
    {
          
        *max = b;
        
    }
    

    if (c > *max)
    {
          
        *max = c;
        
    }

} 


int main()
{
    
 int menor,maior;
 int a,b,c;
 
 setbuf(stdin,NULL);
 scanf("%i\n%i\n%i",&a,&b,&c);
 
 minMax(a,b,c,&menor,&maior);
 
 printf("%i,%i",menor,maior);
 
 setbuf(stdin,NULL);
 getchar();
 
 return 0;
   
}
