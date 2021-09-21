#include <stdio.h>
int main ()
{
	//Bloque de constantes
	float factor = 6.46;
	//Bloque de variables
	float dolares, renminbi;
	//Bloque de instrucciones
	printf ("\nIntroduzca cantidad de dolares:");
	scanf ("%f", &dolares);
	//Conversion a renminbi
	renminbi = dolares * factor;
	printf ("\nSu cantidad es:%1.2f", renminbi);
	return 0;
	
	}