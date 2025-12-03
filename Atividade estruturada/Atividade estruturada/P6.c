#include <stdio.h>

int main()
{
	
	int x,y;
	
	scanf("%i,%i",&x,&y);
	
	if((x == 0)&&(y == 0))
	{
		
		printf("origem");
		
	}else if( (x!=0)&&(y!=0) )
	{
	
		printf("quadrante");
	
	} else
	{
	
		printf("eixo");
		
	}
	
	
}
