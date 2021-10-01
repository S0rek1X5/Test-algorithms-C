#include <stdio.h>
int main ()
{
	int cont,tabla,res;
	
	printf("Tablas de multiplicar\n");
	printf("Que tabla desea aprender\n:");
	scanf("%d",&tabla);
	printf("tabla del:%d",tabla);
	cont=100;
	while(cont>=0){
		res=tabla*cont;
		printf("\n%d X %d = %d", tabla, cont, res);
		cont--;
	}
	printf("\nFin");
	return 0;
}
