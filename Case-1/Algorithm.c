#include <stdio.h>
int main(){
	float subtotal=0,total,precio, descuento1,descuento2, itbms;
	int i,art,Daniel;
	art=0,i=0;
	printf("Bienvenido!!!\n");
	do{
		printf("\nIntroduzca el precio del producto %i: $", i+=1);scanf("%f",&precio);
		art+=1;
		subtotal+=precio;
	}while(precio!=0);
	if(subtotal>=100){
		descuento2=subtotal*0.10;
		subtotal-=descuento2;
		itbms=subtotal*0.07;
		Daniel=10;
	}
	else if(subtotal>80 || subtotal<100){
		descuento1=subtotal*0.15;
		subtotal-=descuento1;
		itbms=subtotal*0.07;
		Daniel=15;
	}
	total=subtotal+itbms;
	art=art-1;
	printf("\n---FACTURA---\n");
	printf("\nUsted ha ingresado una cantidad de: %d ARTICULOS",art);
	printf("\nEL SUBTOTAL CON DESCUENTO DE %d ES: $%1.2f",Daniel,subtotal);
	printf("\nEL TOTAL A PAGAR ES: $%1.2f",total);
	return 0;
}
