 #include <stdio.h>
 #include <math.h>
 
 int main()
 {
     
   float ho,hf,mo,mf,delta_h, delta_m;
   
   scanf("%f:%f\n%f:%f",&ho,&mo,&hf,&mf);
   
   ho += mo/60;
   hf+= mf/60;
   
   if(ho>hf)
   {
   
    ho = 24 - ho;
    delta_h = ho + hf;
   
    int temp = ceil(delta_h);
    delta_m = delta_h - temp;
    delta_h = temp;
    delta_m *= 60;
            
   }else
   {
    
    delta_h = hf - ho;
    int temp = delta_h;
    delta_m = delta_h - temp;  
    delta_m *= 60;
    delta_h = temp;
         
   }
   
   printf("\nO jogo durou %.1f horas e %.1f minutos",delta_h,fabs(delta_m));
   
   setbuf(stdin,NULL);
   getchar();
     
 }
