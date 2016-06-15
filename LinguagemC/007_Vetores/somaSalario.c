#include<stdio.h>

main()
{
	char nome[50];
	float salarios[4];
	
	printf("informe o nome do funcionario");
	gets(nome);
	
	printf("informe os salarios");
	int indice;
	for (indice = 0; indice <4; indice++)
	{
		scanf("%f", &salarios[indice]);
	}
	
	float soma = 0;
	for(indice = 0; indice < 4; indice++)
	{
		soma = soma + salarios[indice];
	}
	
	printf("Total Salario: %0.2f", soma );
	
	float maiorSalario = 0;
	for(indice = 0; indice < 4; indice++)
	{
		if ( salarios[indice] > maiorSalario)
		{
			maiorSalario = salarios[indice];
		}
	}
	
	printf("Maior salario %f", maiorSalario);

	float menorSalario = salarios[0];
	for(indice = 0; indice < 4; indice++)
	{
		if ( salarios[indice] < menorSalario)
		{
			menorSalario = salarios[indice];
		}
	}
	
	printf("Menor salario %f", menorSalario);
	
	
}
