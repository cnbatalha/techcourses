#include<stdio.h>

main()
{
	int valorA = 21, valorB = 4;
	
	int soma = valorA + valorB;
	int subtracao = valorA - valorB;
	int multiplicacao = valorA * valorB;
	int divisao = valorA / valorB;
	int divisaoResto = valorA % valorB;
	
	printf("soma %d \n", soma);
	printf("divisao %d / %d = %d \n", valorA, valorB, divisao);
	printf("divisaoResto %d %% %d = %d \n", valorA, valorB,  divisaoResto);
	
}
