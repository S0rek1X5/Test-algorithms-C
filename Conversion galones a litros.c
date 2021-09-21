#include <stdio.h>
int main ()
{
	//Bloque declarativo de variables
	float galones, litros;
	//Bloque de instrucciones
	printf("\nIntroduzca su volumen:");
	scanf("%f", &galones);
	//Conversion a litro
	litros = galones * 3.785;
	printf ("\nLa cantidad en litros es:%1.2f", litros);
	return 0;
	}