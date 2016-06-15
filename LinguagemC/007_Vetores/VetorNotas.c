#include<stdio.h>

main()
{
	int indice;
	float notas[4];
	
	// lendo vetor notas
	printf("informe 4 notas \n");
	for ( indice = 0; indice < 4; indice++)
	{
		scanf("%f", &notas[indice]);
	}	
	
	// escrevendo vetor notas
	printf("notas informadas \n");
	for ( indice = 0; indice < 4; indice++)
	{
		printf("%0.2f \n", notas[indice]);
	}	
	
	// calcular media
	float soma = 0;
	for ( indice = 0; indice < 4; indice++)
	{
		soma = soma + notas[indice];
	}	
	printf("Soma das notas: %0.2f", soma);
	
	float media;
	media = soma / 4;	
	printf("Media das notas: %0.2f", media);
}
