#include <stdio.h>

main()
{
	int estadoCivil;
		
	printf("informe o estado civil correspondente:");
	scanf("%d",&estadoCivil);
	
	switch (estadoCivil)	
	{
		case 0: {
			printf("Casado");
			break;
		}
		case 1: {
			printf("Solteiro");
			break;
		}
		case 2: {
			printf("Viuvo");
			break;
		}
		case 3: {
			printf("Divociado");
			break;
		}
		case 4: {
			printf("Uniao Estavel");
			break;
		}	
		default:{
			printf("Indefinido");
			break;
		}	
	}
	
	/*
	if ( estadoCivil == 0 )
	{
		printf("Casado");
	}
	else
	{
		if ( estadoCivil == 1 )	
		{
			printf("Solteiro");
		}
		else
		{
			if ( estadoCivil == 2 )	
			{
				printf("Viuvo");
			}			
			else
			{
				printf("Indefinido");
			}
		}		
	}
	
	if ( estadoCivil == 3 )
	{
		printf("Divorciado");
	}
	*/
}
