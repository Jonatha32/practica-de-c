#include<stdio.h>
int main() {
  int myAge = 17; /*Definimos dos variables "Mi Edad" y la "Edad de Votacion"*/
int VotingAge = 18;

 if (myAge >= VotingAge) { /*Le decimos que si "Mi Edad" es mayor o 
			     igual a la "Edad de Votacion" imprima un mensaje*/
   printf("Puedes Votar!\n");
 } else {
   printf("No puede Votar :(\n"); /*Si "Mi Edad" es menor a la "Edad 
				    de Votacion" se imprime el siguiente mensaje*/
 }
return 0;
}
