#include <stdio.h>
#include <string.h>
int main ()
{
	char idiom [4];

	printf("Bienvenido");
	printf("/nSeleccione idioma/Choose lenguage\nSpanish = A --- English = B\n: ");
	scanf("%s",&idiom);
	if(idiom[0]=='a' || idiom[0]=='A'){
	//Contenido en español
	}
	else if(idiom[0]=='b' || idiom[0]=='B'){
	//English content
	}
	else{
	printf ("El idioma marcado no esta registrado/The lenguage selected si nota registered");
	}
	return 0;	
}
