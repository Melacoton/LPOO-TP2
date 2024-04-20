/*2. Realiza un programa que cuente cuántas vocales tiene una cadena de
caracteres ingresada por el usuario.*/

#include <stdio.h>
#include <string.h>
char cadena[150];
int i, cont=0;
main(){
	printf("Ingrese la cadena: ");
	scanf("%s", & cadena);
	
	for(i=0; i<strlen(cadena); i++){
		char caracter= cadena[i];
		if(caracter == 'a' ||caracter == 'e' ||caracter == 'i' ||caracter == 'o' ||caracter == 'u' ||
		caracter == 'A' ||caracter == 'E' ||caracter == 'I' ||caracter == 'O' ||caracter == 'U'){
			cont++;
		}
	}
	printf("\nLa cantidad de vocales es: %d", cont);
}
