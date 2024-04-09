//Realiza un programa que cuente cuántas vocales tiene una cadena de caracteres ingresada por el usuario.

#include <stdio.h>
#include <string.h>
char cadena[100];
int i, cont=0;
main(){
	printf("Ingrese una palabra o cadena de caracteres: ");
	scanf("%s", & cadena[i]);
	
	for(i=0; i<strlen(cadena); i++){
	char caracter =cadena[i];
    if(caracter == 'a'|| caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
    caracter == 'A' || caracter == 'E' ||caracter == 'I' ||caracter == 'O' ||caracter == 'U')
    {cont++;
    }
}
  printf("\nLa cadena ingresada tiene %d vocales", cont);
}