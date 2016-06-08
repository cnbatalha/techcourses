#include<stdio.h>

main()
{
	float valorA, valorB;
	
	//valorA = 21;
	printf("Informe o primeiro valor: ");
	scanf("%f", &valorA);
	printf("Informe o segundo valor: ");
	scanf("%f", &valorB);
	
	//printf("Endereco A %d \n", &valorA);
	//printf("Valor A %d \n", valorA);
	
	float soma;
	soma = valorA + valorB;
	
	printf("%f", soma);
	
	
}
