#include<stdio.h>
#include <string.h>
char oracion [150], opcion;
int i, continuar=1;
int main(){
	printf("Ingrese una oracion: ");
	fgets(oracion, sizeof(oracion), stdin);
	do{
	printf("Selecciones una opcion (1, 2, 3 o 4) : ");
	scanf("%c", & opcion);
	switch(opcion){
		case 1:
		for(i=0; oracion [i]!= '\0'; i++){
			if(oracion[i]>='a' && oracion[i]<='z'){
				printf("%c", oracion [i]-32);
			}
			else{
				printf("%c", oracion[i]);
			}
		}
		break;
			
		case 2:
		 for(i=0; oracion [i]!= '\0'; i++){
		 	if(oracion[i]>='A' && oracion[i]<='Z'){
				printf("%c", oracion [i]+32);
			}
			else{
				printf("%c", oracion[i]);
			}
		}
		break;
			
		case 3:
		 for(i=0; oracion [i]!= '\0'; i++){
		 	if(i %2 == 0){
				printf("%c", oracion [i]>='a' && oracion[i]<='z' ? oracion[i] - 32: oracion[i]);
			}
			else{
				printf("%c", oracion [i]>='A' && oracion[i]<='Z' ? oracion[i] + 32: oracion[i]);
			}
		}
		break;
			
		case 4:
			if(oracion[0] >= 'a' && oracion[0] <= 'z'){
				printf("%c", oracion[0]-32);
			}
			else{
				printf("%c", oracion[0]);
			}
			for(i=1; oracion[i] != '\0' ; i++){
			if(oracion[i-1] == ''){
			if(oracion[i] <='a' && oracion[i] <= 'z'){
			printf("%c", oracion[i] -32);
		}
		else {
			printf("%c", oracion [i]);
		}
		else {
			printf("%c", oracion[i]);
		}

		break;
	}
	printf("Ingrese 1 si desea seguir de lo contrario ingrese 0: ");
	scanf("%d", & continuar );
} while(continuar==1);
}