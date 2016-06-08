#include <stdio.h>


main()
{
	int FLOAT = sizeof(float);
	int INT = sizeof(int);
	
	//printf("int %d bytes \n", sizeof(int));
	//printf("short int %d bytes \n", sizeof(short int));
	//printf("long int %d bytes \n", sizeof(long int));
	printf("float %d bytes \n", FLOAT);
	printf("int %d bytes \n", INT);
	printf(" %d float bytes %d \n", sizeof(float), FLOAT);
	//printf("double %d bytes \n", sizeof(double));
	//printf("char %d bytes \n", sizeof(char));
	
}
