#include<stdio.h>
float Porcentaje(int a){
	float Result;
	Result=(a*100)/20;
	return (Result);
}
int main(){
	float Precio[20],Suma=0,P=0;
	printf("\tBienvenido\n");
	for(int i=0;i<20;i++){
		printf("Introduzca el precio %i: ",i+1);scanf("%f",&Precio[i]);
		if(Precio[i]>50){
			P++;
			Suma+=Precio[i];
		}
	}
	printf("\nEl porcentaje de precios mayores a B/.50.00 es: %1.2f%%",Porcentaje(P));
	return 0;
}
