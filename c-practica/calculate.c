#include <stdio.h>
int main() {
  int longitud = 4; /*Si queremos hallar el area de un rectangulo, podemos hacerlo asi*/
  int ancho = 9;
  int area; //Definimos las variables

  area = longitud * ancho; /*Y las multiplicamos*/

  printf("La longitud es: %d\n", longitud);
  printf("El ancho es: %d\n", ancho);
  printf("El area del rectangulo es: %d\n", area);
  return 0;
}
