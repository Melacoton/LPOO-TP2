/*5. Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es un anagrama de otra cadena también ingresada por el
usuario. Un anagrama es una palabra o frase formada por las mismas
letras de otra palabra o frase, pero en un orden diferente, como por
ejemplo roma y amor.*/

#include <stdio.h>
#include <string.h>
char cadena[100];
char cadena2[100];
int cont[26] = {0}; //array con las letras del abecedario (a-z). lo inicializamos en 0 como siempre
int i;
int anagrama=1;

main(){
	printf("Ingrese la primer cadena de caracteres: ");
	scanf("%s", & cadena);
	
	printf("Ingrese la segunda cadena de caracteres: ");
	scanf("%s", & cadena2);
	

    for(i = 0; i<strlen(cadena); i++){ 
        cont[cadena[i]-'a']++; 
   }
    for(i = 0; i<strlen(cadena2); i++){
        cont[cadena2[i]-'a']--; //El contador va en decremento si llega a 0 entonces es un anagrama
   }
   
   for(i=0;i< 26; i++){
   	if(cont[i] != 0){
   		anagrama=0;
	   }
   }
   if(anagrama==1){
   	printf("\nLa cadena es un anagrama");
   }
   else{
   	printf("\nLa cadena no es un anagrama");
   }
}
