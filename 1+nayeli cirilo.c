#include <stdio.h>
#include <stdlib.h>

void imprimir (int a,int b);




int main(int argc, char *argv[]) //cantt puede ser calculado en la función, no necesita ser argumento.
{
	
	int a, b;
	
	printf("ingrese un numero\n");
	scanf("%d",&a);
	
	printf("ingrese un segundo numero\n");
	scanf("%d",&b);
	
	imprimir(a,b);
	
	
	return 0;
}
void imprimir (int a,int b){
	
	printf("el primer numero es:%d\n el segundo numero es:%d",a,b);
}
