#include<stdio.h>

linha()
{
	int index;
	for ( index = 0; index < 30; index++)
	{
		printf("=");		
	}
	printf("\n");
}

main()
{
	int numero, *ponteiroNumero, **ponteiroDoPonteiro;
	numero = 10;
	linha();
	printf("valor de numero: %d \n", numero);
	printf("endereco de numero: %d \n", &numero);
	
	ponteiroNumero = &numero;
	linha();
	printf("ponteiro de numero: %d \n", ponteiroNumero);
	printf("valor apontado: %d \n", *ponteiroNumero);
	printf("endereco do ponteiro: %d \n", &ponteiroNumero);
	
	ponteiroDoPonteiro = &ponteiroNumero;
	linha();
	printf("ponteiro de numero: %d \n", ponteiroDoPonteiro);
	printf("valor apontado: %d \n", *ponteiroDoPonteiro);
	printf("valor do valor apontado: %d \n", **ponteiroDoPonteiro);
	printf("endereco do ponteiro: %d \n", &ponteiroDoPonteiro);	
	
}
