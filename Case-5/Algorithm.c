#include<stdio.h>
float CalculoPromedio(float a){
	float Result;
	Result=a/3;
	if(Result>=90){
		printf("A");
	}
	else if(Result>=80){
		printf("B");
	}
	else if(Result>=70){
		printf("C");
	}
	else if(Result>=60){
		printf("D");
	}
	else if(Result<=59){
		printf("F");
	}
	return (Result);
}
int main(){
	float Suma[5],Promedio,Calificacion[3];
	printf("\tBienvenido");
	for(int i=0;i<5;i++){
		Suma[i]=0;
		printf("\n");
		for(int j=0;j<3;j++){
			printf("Introduzca la calificacion %i del estudiante %i: ",j+1,i+1);scanf("%f",&Calificacion[j]);
			Suma[i]+=Calificacion[j];
		}	
	}
	for(int i=0;i<5;i++){
		printf("\nLa calificacion del estudiante %i es: ",i+1);CalculoPromedio(Suma[i]);
	}
	return 0;
}
