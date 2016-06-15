#include <stdio.h>
#include <conio.h>

main()
{
	int op;
	
	int index;
	for (index = 1; index < 180; index++)
	{
		printf("Numero - %d - Caracter - %c \n", index, index);
	}
	
	op  = 1;
	
	while (op != 5)
	{
	
		// exibindo MENU
		printf("\166");
		printf("CACULADORA \n");
		printf("[1] \t SOMA \n");
		printf("[2] \t SUBTRACAO \n");
		printf("[3] \t MULTIPLICACAO \n");
		printf("[4] \t DIVISAO \n");
		printf("[5] \t SAIR \n");
		
		scanf("%d", &op);
		system("cls");
	
	} 
	
	system("cls");
}
