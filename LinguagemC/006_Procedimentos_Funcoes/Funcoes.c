#include<stdio.h>

soma(int a, int b)
{
	int soma;
	soma = a + b;
	printf("Soma %d \n", soma);
}

soma_retorno(int a, int b)
{
	return a + b;
}

main()
{
	int vla, vlb;
	
	scanf("%d", &vla);
	scanf("%d", &vlb);
	
	soma(vla, vlb);
	
	int retorno;
	retorno = soma_retorno(vla, vlb);
	printf("Soma - Retorno: %d \n", retorno);
}
