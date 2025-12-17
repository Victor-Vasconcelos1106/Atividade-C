#include <stdio.h>


float processaPositivos(float valores[6], int *numPositivosPtr)
{
  
    int count = 0,i;
    float soma = 0;
    

    *numPositivosPtr = 0;

    for (i = 0; i < 6; i++)
    {

        if (valores[i] > 0)
        {
                       
            count++;
            soma += valores[i];
            
        }
    }


    *numPositivosPtr = count;


    if (count > 0)
    {
              
        return soma / count;
        
    } else
    {
          
        return 0;
        
    }
}

int main()
{
 
 int counter = 0,i;
 float lista[6];
 
 for(i = 0;i < 6;i++)
 {
 
 setbuf(stdin,NULL);
 scanf("%f",&lista[i]);
       
 }
 
 printf("%.2f", processaPositivos(lista, &counter));
 
 setbuf(stdin,NULL);
 getchar();
 return 0;
   
}
