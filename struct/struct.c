#include <stdio.h>
#include <string.h>

struct Animal
{
  char tipo[60];
  int edad;
  float tamano;
};

int main (void)
{
  struct Animal ero;

  strcpy(ero.tipo, "Tigre");
  ero.edad = 32;
  ero.tamano = 2,77;

  printf("Tipo: %s\n", ero.tipo);
  printf("Edad: %d\n", ero.edad);
  printf("Tamano %f2\n", ero.tamano);

  
  return(0);
}
