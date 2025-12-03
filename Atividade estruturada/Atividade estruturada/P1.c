#include <stdio.h>

int main()
{

float a,b,peso_a,peso_b;

peso_a = 3.5, peso_b = 7.5;

scanf("%f\n%f", &a,&b);

float media_p = ( (peso_a*a) + (peso_b*b) ) / (peso_a+peso_b);

printf( "MEDIA = %.5f",media_p );


}
