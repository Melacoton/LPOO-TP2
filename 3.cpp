//Primero hice el ejercicio 6 asi que la explicacion es casi la misma 
#include <stdio.h>
#include <string.h>
char cadena[100];
int tamanio, i;
int palindromo = 1; 

int main() {
    printf("Ingrese una cadena de caracteres: ");
    scanf("%s", cadena);

    tamanio = strlen(cadena);

    for(i = 0; i < tamanio / 2; i++) {
        if(cadena[i] != cadena[tamanio - i - 1]) {
            palindromo = 0; 
        }
    }

    if(palindromo)
        printf("\nEs un palindromo");
    else
        printf("\nNo es un palindromo");
}
