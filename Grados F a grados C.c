#include <stdio.h>
int main ()
{
	//Bloque declarativo de variables
	float fah, cel;
	//Bloque de instrucciones
	printf ("\nIntroduzca grado en fahrenheit:");
	scanf ("%f",&fah);
	//Conversion de grados
	cel = (fah-32) * 5/9;
	printf ("\nLa temperatura en C es:%1.2f", cel);
	return 0;
	}