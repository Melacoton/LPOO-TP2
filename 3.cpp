/*3. Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es palíndromo (se lee igual de izquierda a derecha que de
derecha a izquierda).*/

#include <stdio.h>
#include <string.h>
char cadena[150];
int palindromo=1, i;
int main(){
	printf("Ingrese la cadena: ");
	scanf("%s", & cadena);
	
	int longitud=strlen(cadena);
	
	for(i=0;i<longitud; i++){
		if(cadena[i]!= cadena[longitud - i - 1]){ /*Esto se utiliza en el programa para comparar 
cada carácter desde el principio de la cadena (cadena[i]) con su carácter correspondiente
 desde el final (cadena[tamanio - i - 1]), ejemplo "radar" compara el primer caracter
  con el ultimo: r=r y asi va determinando si es palindromo o no*/
  palindromo=0;
  }
  }
  if(palindromo==1){
  	printf("\nEs palindromo");
  }
  else {
  	printf("\nNo es palindromo");
  }
}

    if(palindromo)
        printf("\nEs un palindromo");
    else
        printf("\nNo es un palindromo");
}
