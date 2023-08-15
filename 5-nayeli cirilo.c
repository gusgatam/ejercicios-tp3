#include <stdio.h>
#include <stdlib.h>


void suma (int r1, int r2, int r3, int r4, int r5)
{
	int sum;
	sum=r1+r2+r3+r4+r5;
	
	printf("la suma de las resistencias es:%d\n",sum);
}

void imprimir(int r1, int r2, int r3, int r4, int r5){
	printf("las resistencias son:\n%d\n%d\n%d\n%d\n%d\n",r1,r2,r3,r4,r5);
}


int main(int argc, char *argv[]) //cantt puede ser calculado en la función, no necesita ser argumento.
{
	
	int r1,r2,r3,r4,r5;//Estructuras repetitivas
	
	
	printf("ingresar la resistencia 1 \n");
	scanf("%d",&r1);
	printf("ingresar la resistencia 2 \n");
	scanf("%d",&r2);
	printf("ingresar la resistencia 3 \n");
	scanf("%d",&r3);
	printf("ingresar la resistencia 4 \n");
	scanf("%d",&r4);
	printf("ingresar la resistencia 5 \n");
	scanf("%d",&r5);
	
	suma(r1,r2,r3,r4,r5);
	imprimir(r1,r2,r3,r4,r5);
	
	return 0;
}

