#include <stdio.h>
int main ()
{				//Determina el mayor y el menor
	float a, b, c, d, e, max, min;
	printf("Introduzca el valor a\n: ");
	scanf("%f",&a);
	printf("Introduzca el valor b\n: ");
	scanf("%f",&b);
	printf("Introduzca el valor c\n: ");
	scanf("%f",&c);
	printf("Introduzca el valor d\n: ");
	scanf("%f",&d);
	printf("Introduzca el valor e\n: ");
	scanf("%f",&e);
	
	max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	if(d>max){
		max=d;
	}
	if(e>max){
		max=e;
	}
	printf("El numero mayor es\n-> %1.1f",max);
	
	min=a;
	if(b<min){
		min=b;
	}
	if(c<min){
		min=c;
	}
	if(d<min){
		min=d;
	}
	if(e<min){
		min=e;
	}
	printf("\nEl numero menor es\n-> %1.1f",min);
	return 0;
}
