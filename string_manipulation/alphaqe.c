#include <stdio.h>
/**
 *
 */
int main()
{
  char a;
  for (a = 'a'; a <= 'z'; a++)
    {
      if (a != 'q' && a != 'e')
	{
      printf("%c", a);
	}
    }
  putchar('\n');
}
