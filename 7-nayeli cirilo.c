#include <stdio.h>
#include <stdlib.h>

void may_igual(int n1, int n2)
{
	if(n1==n2)
	{
		printf("Los dos numeros son iguales\n");
		
	}
	else
	{
		if(n1>n2)
		{
			printf("El primer numero es mayor y  es:%d\n",n1);
			
		}
		else
		{
			printf("El segundo numero es mayor y es: %d\n",n2);
		}
		
	}
}

int main() 
{
	int n1,n2;
	
	printf("Ingresar el primer numero\n");
	scanf("%d",&n1);
	
	printf("Ingrese el segundo numero\n");
	scanf("%d",&n2);
	
	
	may_igual(n1,n2);
	
	system ("pause");
	
	return 0;
}

