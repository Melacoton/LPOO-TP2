//Pedir al usuario que ingrese su nombre y luego imprimirlo en pantalla.

#include <stdio.h>
#include <string.h>
char nombre [100];
main(){
	printf("Ingrese su nombre: ");
	scanf("%s", & nombre);
	
	printf("hola! %s", nombre);
}