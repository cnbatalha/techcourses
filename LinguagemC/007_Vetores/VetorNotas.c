#include<stdio.h>

main()
{
	int indice;
	float notas[4];

	printf("informe 4 notas \n");
	for ( indice = 0; indice < 4; indice++)
	{
		scanf("%f", &notas[indice]);
	}	
	
	printf("notas informadas \n");
	for ( indice = 0; indice < 4; indice++)
	{
		printf("%0.2f \n", notas[indice]);
	}	
	

}
