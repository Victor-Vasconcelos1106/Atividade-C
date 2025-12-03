#include <stdio.h>

int main()
{
	
	int s,m ,h;
	
	scanf("%i", &s);
	
	h = s/3600;
	s -= h*3600;
	m = s/60;
	s-= m*60;
	
	printf( "%i : %i : %i",h,m,s);


}

