#include <stdio.h>
#include <math.h>

#define pi  3.14159

int main()
{
	
	float r;
	
	scanf("%f",&r);
	
	float volume = ( (float) 4/3 ) * pi * pow(r,3);

	
	printf("VOLUME = %.3f", volume);


}
