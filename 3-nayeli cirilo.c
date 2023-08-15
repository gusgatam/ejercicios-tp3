#include <stdio.h>
#include <stdlib.h>


void porcef (int fem, int mach){
	float porsf;
	porsf=(fem*100)/(fem+mach);
	printf("el porcentaje de mujeres es:%.2f\n",porsf);
}
void porcem(int fem, int mach){
	float porsm=0;
	porsm=(mach*100)/(fem+mach);
	printf("el porcentaje de hombres es:%.2f\n",porsm);
	
}



int main(int argc, char *argv[]) //cantt puede ser calculado en la función, no necesita ser argumento.
{
	
	int fem,mach;
	
	
	printf("ingresar el numero de mujeres que se postularon \n");
	scanf("%d",&fem);
	
	printf("ingresar el numero de hombres que se postularon \n");
	scanf("%d",&mach);
	
	
	
	
	porcef(fem,mach);
	porcem(fem,mach);
	return 0;
}

