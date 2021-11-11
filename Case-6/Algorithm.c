#include<stdio.h>
int main(){
	int Numero[10],A;
	printf("\tBienvenido");
	for(int i=0;i<10;i++){
		printf("Introduzca el numero %i: ",i+1);scanf("%d",&Numero[i]);
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(Numero[i]>Numero[j]){
				A=Numero[i];
				Numero[i]=Numero[j];
				Numero[j]=A;
			}
		}
	}
	printf("\nOrden ascendente\n");
	for(int i=0;i<10;i++){
		printf("%d\n",Numero[i]);
	}
	printf("\nOrden descendente\n");
	for(int i=10;i>=0;i--){
		printf("%d\n",Numero[i]);
	}
	return 0;
}
