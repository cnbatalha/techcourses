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

struct Funcionario
{
	char nome[100];
	int idade;
	float salario;	
}

main()
{
	
	struct Funcionario f01;
	
	printf("Cadastro de Funcionario \n");
	linha();
	printf("Nome: ");
	gets(f01.nome);
	printf("Idade: ");
	scanf("%d", &f01.idade);
	printf("Salario: ");
	scanf("%f", &f01.salario);
	linha()	;
	printf("\n\n\n");
	printf("Nome informado: %s \n" , f01.nome);
	printf("Idade: %d \n" , f01.idade);
	printf("Salario: %f \n" , f01.salario);
	
}
