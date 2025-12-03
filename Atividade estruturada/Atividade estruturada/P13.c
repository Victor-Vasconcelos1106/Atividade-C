#include <stdio.h>

 int main()
 {
     
   int n = 10, i, maior, pos, lista[n];
   
   for(i = 0; i< n; i++)
   {
         
    setbuf(stdin,NULL);
    scanf("%i",&lista[i]);        
   
   }
   
   for(i = 0 ; i < n ; i++)
   {
      
      if(i == 0)
      {
           
       maior = lista[i];
       pos = i+1;
           
      }else
      {
           
           if(maior < lista[i])
           {
                             
             maior = lista[i];
             pos = i+1;                                  
           
           }     
           
      }
      
   }
   
   printf("maior: %i\nposicao relativa: %i",maior, pos);

   setbuf(stdin,NULL);
   getchar();
     
 }
