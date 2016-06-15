#include<stdio.h>
#include<stdlib.h>

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
	char *ptrNome;
	
	ptrNome = (char *) malloc(20);
	if ( ptrNome == NULL )
	{
		printf("Erro na alocacao");
	}
	else
	{
		printf("Alocacao correta");
		gets(ptrNome);
		scanf()
		free(ptrNome);
	}
	
	
}
