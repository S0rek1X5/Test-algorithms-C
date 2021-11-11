#include<stdio.h>
float CalculoPromedio(int a,int b){
	float Result;
	Result=a/b;
	return(Result);
}
int main(){
	float suma=0,Calificacion[20],Promedio;
	int i;
	printf("\tBienvenido\n");
	for(i=0;i<20;i++){
		printf("Introduzca su calificacion %i: ",i+1);scanf("%f",&Calificacion[i]);
		suma+=Calificacion[i];
	}
	printf("El promedio de calificaciones es: %.2f",CalculoPromedio(suma,i));
	return 0;
}
