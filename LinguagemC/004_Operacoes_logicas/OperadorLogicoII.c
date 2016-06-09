#include <stdio.h>

main()
{
	int valor;
	
	printf("Informe um valor:");
	scanf("%d", &valor);
	
	if ( 
			((valor >= 1 ) && (valor <= 10))
		||
			((valor >= 20 ) && (valor <= 30))
		)		
	{
		printf("%d esta' no intervalo \n", valor);	
	}
	else
	{
		printf("%d nao esta' no intervalo \n");	
	}
	
	
	
}
