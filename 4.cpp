//Realiza un programa que reemplace todas las apariciones de un carácter en 
//una cadena de caracteres ingresada por el usuario por otro carácter también ingresado por el usuario.

#include <stdio.h>
#include <string.h>
char cadena [100];
char caracter, caracter2;
int i;
main(){
	printf("Ingrese la cadena de caracteres: ");
    scanf("%s", cadena);

    printf("\nIngrese el caracter que desea reemplazar: ");
    scanf(" %c", &caracter);

    printf("\nIngrese el caracter que lo reemplaza: ");
    scanf(" %c", &caracter2);
   
    for(i=0; i<strlen(cadena); i++){
    	if (cadena[i]==caracter){
    		cadena[i]=caracter2;
		} 
	}
	printf("\nLa cadena reemplazada queda: %s", cadena);
	
}
