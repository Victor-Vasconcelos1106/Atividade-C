#include <stdio.h>
#include <math.h>

int main()
{
	
	float dist, vel_a, vel_b;
	vel_a = 60;
	vel_b = 90;
	
	scanf("%f", &dist);
	
	float t = ( (dist)/(vel_a + vel_b) ) * 60 ;
	
	printf( "%.1f m",fabs(t));


}
