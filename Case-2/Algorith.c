#include<stdio.h>
float CalculoPrestaciones(float a){
	float Daniel;
	if(a<=1000){
		Result=a*0.11;
	}
	else if(a>1000){
		Result=a*0.1225;
	}
	return (Result);
}
int main(){
	float salarioNeto,Total;
	int Opc;
	printf("\tBienvenido");
	do{
		printf("\nIntroduzca su salario neto\n: ");scanf("%f",&salarioNeto);
		Total=salarioNeto+CalculoPrestaciones(salarioNeto);
		printf("\nSus prestaciones laborales son: %1.2f",CalculoPrestaciones(salarioNeto));
		printf("\nSu salario total es de: %1.2f",Total);
		printf("\n\nDesea realizar otro calculo de prestaciones?\n1 = Si  -  0 = No: ");scanf("%d",&Opc);
	}while(Opc==1);
	return 0;
}
