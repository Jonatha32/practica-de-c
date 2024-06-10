#include<stdio.h>
int main(){
  int items = 50;
  float cost = 9.99;
  float total = items * cost;
  char currency = '$';

  printf("Number of items: %d\n", items);
  printf("cost per item: %.2f %c\n", cost, currency);
    printf("total = %.2f %c\n", total, currency);
    return 0;
}
