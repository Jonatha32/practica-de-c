#include <stdio.h>
/**
 *
 */
int main()
{
  char a = 'a';
  int b = 0;

  for (b = 0; b <= 10; b++)
    {
      for (a = 'a'; a <= 'z'; a++)
	{
	  printf("%c", a);
	}
      a++;
      putchar('\n');
    }
}
