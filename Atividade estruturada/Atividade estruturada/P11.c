#include <stdio.h>

 int main()
 {
     
   int a,b,i;
   int soma = 0;
   
   scanf("%i\n%i",&a,&b);
 
   if(a % 2 == 0)
   {
       
    a += 1;   
    
   }else
   {
   
    a += 2;
             
   }
   
   for(i = a ; i < b ; i+=2)
   {
     
      soma+= i; 
   }
   
   
   printf("soma : %i ",soma);
  

   
   setbuf(stdin,NULL);
   getchar();
     
 }
