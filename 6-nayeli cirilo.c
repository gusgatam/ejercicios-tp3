#include <stdio.h>
#include <stdlib.h>




void octa(float num1){
	float oct;
	oct=num1/8;
	printf("la octava parte es:%.2f",oct);
}


int main(int argc, char *argv[]) {
	
	float num1;
	
	
	printf("ingresar un numero \n");
	scanf("%f",&num1);
	
	octa(num1);
	
	
	return 0;
}
