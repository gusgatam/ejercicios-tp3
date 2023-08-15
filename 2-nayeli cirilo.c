#include <stdio.h>
#include <stdlib.h>


void perimetro (int alt, int base){
	float per;
	per=(2*alt)+(2*base);
	printf("el perimetro es:%.2f\n",per);
}
void areas(int alt, int base){
	float area;
	area=alt*base;
	printf("el area es:%.2f\n",area);
	
}



int main(int argc, char *argv[]) //cantt puede ser calculado en la función, no necesita ser argumento.
{
	
	int base,alt;
	
	printf("ingresar base\n");
	scanf("%d",&base);
	
	printf("ingresar altura\n");
	scanf("%d",&alt);
	
	
	
	
	perimetro (alt,base);
	areas (alt,base);
	return 0;
}
