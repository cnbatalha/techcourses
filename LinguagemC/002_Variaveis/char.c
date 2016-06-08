#include<stdio.h>

main()
{
	char letra, letra2;
	
	printf("Informe uma letra \n");
	letra = getchar();
	fflush(stdin);
	letra2 = getchar();
	printf("Letra %c \n", letra);
	printf("Letra 2 %c \n", letra2);
	printf("Letra codigo %d \n", letra);
	
	fflush(stdin);
	
	printf("Informe uma letra \n");
	scanf("%c", &letra);	
	printf("Letra %c \n", letra);
	printf("Letra codigo %d \n", letra);
}
