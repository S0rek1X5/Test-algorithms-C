#include <stdio.h>
int main ()
{
	//Bloque de variables
	int NUMERO;
	//Bloque de instrucciones
	printf ("\nIntroduzca el numero que desea saber del 1 al 10:");
	scanf ("%d", &NUMERO);
	//Bloque de elecciones
	if (NUMERO==1){
		printf("\nOne");
	}
	else if(NUMERO==2){
		printf("\nTwo");
	}
	else if(NUMERO==3){
		printf("\nThree");
	}
	else if(NUMERO==4){
		printf("\nFour");
	}
	else if(NUMERO==5){
		printf("\nFive");
	}
	else if(NUMERO==6){
		printf("\nSix");
	}
	else if(NUMERO==7){
		printf("\nSeven");
	}
	else if(NUMERO==8){
		printf("\nEight");
	}
	else if(NUMERO==9){
		printf("\nNine");
	}
	else if(NUMERO==10){
		printf("\nTen");
	}
	else {
	printf("Este numero no esta registrado");
}
	return 0;
	
}
