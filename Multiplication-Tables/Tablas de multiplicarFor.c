#include <stdio.h>
int main ()
{
	int cont,tabla,res;
	
	printf("Tablas de multiplicar\n");
	printf("Que tabla desea aprender\n:");
	scanf("%d",&tabla);
	printf("tabla del:%d",tabla);
	cont=0;
	for(cont=0;cont<=100;){
		res=tabla*cont;
		printf("\n%d X %d = %d", tabla, cont, res);
		cont=cont+1;
	}
	printf("Fin");
	return 0;
}
