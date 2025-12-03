#include <stdio.h>

int main()
{
	
	int n = 3;
	
	int values[n];
	
	int maior, menor, medio;
	int i;
	
	for(i = 0;i<n;i++)
	{
	
	
		scanf("%i",&values[i]);
		
	}
	
	for(i = 0;i < n ;i++)
	{
		if(i == 0)
		{
			
			maior = values[i];
			medio = values[i+1];
			menor = values[i+2];
			
		}else if(maior < values[i])
		{
			
			medio = maior;
			maior = values[i];
			
		}
		
		if(menor > values[i])
		{
		
			menor = values[i];
		
		}
		
		
	}
	
	printf("\n%i\n%i\n%i\n",menor,medio,maior);
	
	int k = 0;
	for(k = 0;k<n;k++)
	
	{
	
	printf("\n%i",values[k]);
	
	}
	
	
	
}



