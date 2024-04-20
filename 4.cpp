/*4. Realiza un programa que reemplace todas las apariciones de un carácter
en una cadena de caracteres ingresada por el usuario por otro carácter
también ingresado por el usuario.*/

#include <stdio.h>
#include <string.h>
char cadena[150];
char caracter, caracter2;
int i;
int main(){
	printf("Ingrese la cadena: ");
	scanf("%s", & cadena);
	
	printf("\nIngrese el caracter que desea reemplazar: ");
	scanf(" %c", & caracter);
	
	printf("\nIngrese el nuevo caracter: ");
	scanf(" %c", & caracter2);
	
	for(i=0;i<strlen(cadena); i++){
		if(cadena[i]==caracter){
			cadena[i]=caracter2;
		}
	}
	printf("\nLa nueva cadena es %s", cadena);
}
