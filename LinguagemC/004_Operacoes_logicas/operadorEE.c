#include<stdio.h>

main()
{
	int numero;
	scanf("%d", &numero);
	
	if ((numero >= 1) && (numero =< 10))
	{
		printf("Está no intervalo");
	}
	else
	{
		printf("Não está no intervalo");
	}
	
}
