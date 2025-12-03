#include <stdio.h>

 int main()
 {
     
   int a,i,x;
   scanf("%i",&a);
   printf("\n");
   
   for(i = 1 ; i <= 20 ; i++)
   {
      x = i * a;   
      printf("%i x %i : %i\n",a,i,x);
      
   }
   

   setbuf(stdin,NULL);
   getchar();
     
 }
