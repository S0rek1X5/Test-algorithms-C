#include <stdio.h>
int main ()
{
	
	int idiom;

	printf("Bienvenido");
	printf("/nSeleccione idioma/Choose lenguage\nEspanol = 1 --- English = 2\n: ");
	scanf("%d",&idiom);
	if(idiom==1){
  	//Contenido en español
	}
	else if(idiom=2){
	//English content
	}
	else{
	printf ("El idioma marcado no esta registrado/The lenguage selected si nota registered");
	}
	return 0;
}
