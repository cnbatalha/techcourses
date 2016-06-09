#include<stdio.h>

main()
{
	char resposta;
	int valor;
	
	scanf("%d", &valor);

	resposta = ( valor >= 0 ) ? 'P' : 'N';
	
/*	
	if ( valor >= 0 )
	{
		resposta = 'P';		
	}
	else
	{
		resposta = 'N';
	}
	
*/
	
	printf("resposta %c", resposta);
	
}
