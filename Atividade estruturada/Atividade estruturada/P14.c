#include <stdio.h>

 int main()
 {
  
  unsigned short int valido = 1;
  
  while(valido)
  {
               
   int M,N;
   
   printf("digite dois valores:\n\n");
   scanf("%i\n%i",&M,&N);
   
   if((M<=0)||(N<=0))
   {
                     
    valido = 0;
   
   }else
   {
        
    int i = M,soma = 0;
    int buf;
    
    printf("\nsequencia:\n");
    
    for(i;i<=N;i++)
    {
                   
     soma += i;
     printf("\n%i",i);           
    
    }
    
    printf("\n\nsoma:\n\n%i\n\n",soma);
   
   }          
               
  }
   
   printf("\n<fim do programa, aperte qualquer tecla para sair>");
   setbuf(stdin,NULL);
   getchar();
     
 }
