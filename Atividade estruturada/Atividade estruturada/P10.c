#include <stdio.h>
#include <math.h>
 int main()
 {
     
   int a,b,c;
   float delta, raiz1, raiz2 ;
   
   scanf("%i\n%i\n%i",&a,&b,&c);
   
   delta = pow(b,2) - 4*a*c;
   
   
   if( (a == 0) || (delta < 0) )
   {
       
       printf("Impossivel calcular");
   
   }else
   {
        
        raiz1 = ( -b + sqrt(delta) )/(2*a);
        raiz2 = ( -b - sqrt(delta) )/(2*a);
        printf("raizes : { %.3f, %.3f }",raiz1,raiz2);
   }

   
   setbuf(stdin,NULL);
   getchar();
     
 }
