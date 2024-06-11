#include<stdio.h>
int main() {
  int x = 66; /*Definimos dos variables*/
  int y = 68;

  if (x == y) { /*Si x es igual a y, 
		  que imprima lo siguiente*/
    printf("uh...\n");
  }else if (x > y) { /*Si la primer condicion no se cumple, 
		       se ejecuta la siguiente. Si x es mayor a y,
		       se imprime lo otro*/
    printf("fua...\n");
  } else {
    printf("jajaja\n");  /*Si ninguna condicion se cumple, 
			   se imprime "jajajaja"*/
  }
}
