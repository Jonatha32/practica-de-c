#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *
 */
int main (void)
{
  char *line = NULL;
  size_t a = 0;
  ssize_t b;

  while(1)
    {
      printf("$ ");
      b = getline(&line, &a, stdin);
      if(b == -1)
	{
	  printf("error\n");
	  break;
	}
      printf("%s\n", line);
      free(line);
      return 0;
    }
}
