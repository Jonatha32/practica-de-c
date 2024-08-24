#include <string.h>
#include <stdio.h>
/**
 * main - alphabetic
 */
int main ()
{
  char b = 'a';
  char a;
  while (b <= 'z')
    {
      printf("%c", b);
      b++;
    }
  printf("\n");

  for (a = 'z'; a >= 'a'; a--)
    {
      putchar(a);
    }
  putchar('\n');
}
