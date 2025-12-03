 #include <stdio.h>
 
 int main()
 {
     
   float salario_o, salario_f,reajuste,percentual;
   scanf("%f",&salario_o);
   
   
   if(salario_o > 5000)
   {
                
    percentual =  10;
            
   }else if( (salario_o < 5000) && ( salario_o >= 1500 ) )
   {
    
    percentual =  15;

   }else
   {
        
    percentual =  20;
      
   }
   
   salario_f = (percentual/100 + 1)*salario_o;
   reajuste = salario_f - salario_o;
   
   printf
   ("\nNovo Salario: %.2f\nReajuste: %.2f\nPercentual do reajuste: %.0f%%",
   salario_f, reajuste,percentual);
   
   setbuf(stdin,NULL);
   getchar();
     
 }
