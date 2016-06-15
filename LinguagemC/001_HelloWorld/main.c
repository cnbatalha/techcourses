#include<stdio.h>

int operacaoResto(int a, int b)
{	
	int retorno = a % b;
	return retorno;
}

main()
{
	int vl1, vl2, resto;
	vl1 = 21;
	vl2 = 4;
	resto = operacaoResto(vl1, vl2);
	printf("O resto da divisao é: %d", resto);
}
