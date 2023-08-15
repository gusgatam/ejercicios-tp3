#include <stdio.h>
#include <stdlib.h>




void octa(float num1){
	float oct;
	oct=num1/8;
	printf("la octava parte es:%.2f",oct);
}


int main(int argc, char *argv[]) //cantt puede ser calculado en la función, no necesita ser argumento.
{
	
	float num1;
	
	
	printf("ingresar un numero \n");
	scanf("%f",&num1);
	
	octa(num1);
	
	
	return 0;
}
