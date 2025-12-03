#include <stdio.h>

int main()
{

int distancia;
float combustivel_gasto,consumo_medio;

scanf("%i\n%f", &distancia,&combustivel_gasto);

 consumo_medio = distancia/combustivel_gasto;

printf( "%.3f km/l",consumo_medio );


}
