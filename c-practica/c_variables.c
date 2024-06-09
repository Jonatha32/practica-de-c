#include <stdio.h>

int main() {
   int miNum = 5;
   float rec = 1.5;
   float cer = 2.1;
   rec = cer; /*Iguale el valor de la variable rec y la variable cer*/
   char tor[] = "Goku";
   miNum = 15; //Cambie el valor de la variable miNum de 5 a 15

   printf("%d\n", miNum);
   printf("%f\n", rec); //Esto funciona para imprimir el valor de una variable
   printf("Mi personaje favorito de Marvel es: %s\n", tor);

   printf("Mi equipo de futbol favorito es: %s", "Wanderers\n"); /*Esto funciona para imprimir 
								 directamente sin variables*/
   return 0;
}
