#include<stdio.h>
int main() {
  int day = 2;
  switch (day) {
  case 6:
    printf("Hoy es sabado\n");
    break;
    case 7:
      printf("Hoy es Domingo\n");
      break;
      default:
	printf("Hoy es dia de semana\n");
  }
  }
