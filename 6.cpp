//Realiza un programa que determine si una cadena de caracteres ingresada por el usuario
// es un anagrama de otra cadena también ingresada por el usuario. Un anagrama es una palabra o frase
// formada por las mismas letras de otra palabra o frase, pero en un orden diferente, como por ejemplo "roma" y "amor".

#include <stdio.h>
#include <string.h>
char cadena[100];
char cadena2[100];
int contador[26] = {0}; //array con las letras del abecedario (a-z). lo inicializamos en 0 como siempre
int i;
int variable=1;

//Explico cada cosa porque string nunca vimos asi que todo lo busque en chat pero dentro de todo lo trato de entender
//no quiero desaprobar :(
main(){
	printf("Ingrese la primer cadena de caracteres: ");
	scanf("%s", & cadena);
	
	printf("Ingrese la segunda cadena de caracteres: ");
	scanf("%s", & cadena2);
	

    for(i = 0; cadena[i] != '\0'; i++){ //cadena[i] != '\0' se fija que el valor i no sea nulo, es decir, el limite de caracteres que contienen la cadena
        contador[cadena[i]-'a']++; 
		/*cadena[i]-'a' verifica que caracter se esta guardando en que posicion. El -'a'  indica el valor numerico que 
		lo representa en el arrays segun el valor ASCCI. osea por ejemplo si i=d 
		hacemos este calculo:
		El valor ASCII de 'a' es 97
		El valor ASCII de 'd' es 100 
		entonces hacemos 100 - 97 = 3. Funciona como cualquier otro arrays */
   }
    for(i = 0; cadena2[i] != '\0'; i++){
        contador[cadena2[i]-'a']--; //El contador va en decremento si llega a 0 entonces es un anagrama
   }
   
  for(i = 0; i < 26; i++) {
        if(contador[i] != 0) {
            variable = 0;
        }
    }

    if(variable){
        printf("\nLa cadena es un anagrama");
    } else {
        printf("\nLa cadena no es un anagrama");
    }
}

/*Las cadenas de caracteres se comparan entre si mediante el contador, este realiza un conteo de la cantidad de caracteres 
que hay y si son iguales o no, asi empieza a decrecer y si llega a 0 es porque los caracteres de ambas cadenas son los
mismos y en igual cantidad. de lo contrario significa que no es un anagrama*/