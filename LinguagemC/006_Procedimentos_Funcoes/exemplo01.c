#include<stdio.h>

operacaoSoma( int parametro1, int parametro2 )
{
	printf("Executando operacaoSoma() \n");
	int soma;
	soma = parametro1 + parametro2;
	printf("Soma: %d \n", soma);
}

int operacaoDivisao( int parametro1, int parametro2 )
{
	printf("Executando operacaoDivisao() \n");
	int divisao;
	divisao = parametro1 / parametro2;
	printf("Divisao: %d \n", divisao);
	return divisao;
}


main()
{
	printf("Executando main() \n");
	int valor1, valor2,  retornoFuncao;
	valor1 = 20;
	valor2 = 10;
	operacaoSoma(valor1, valor2);	
	retornoFuncao = operacaoDivisao(valor1, valor2);	
	printf("retorno Funcao %d", retornoFuncao);
}


