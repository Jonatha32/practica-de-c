#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
/**
 * getenv - prints the environment
 * @env: Environment Variables
 * Return: Always 0.
 */
int _getenv(char **env)
{
	unsigned int i;

	i = 0;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
/**
 *
 */
int main(int ac __attribute__((unused)), char **av, char **env)
{
  size_t n, bytes_read = 0;
  int i = 0, bool = 0;
  char **array;
  char *buffer = NULL, *let = "Shellder:/$ ", *token;

  while (1)
    {
      write(1, let, 12); //Muestra el prompt
      bytes_read = getline(&buffer, &n, stdin); /*Toma la linea de stdin y guarda los bytes leidos por getline en bytes_read.*/
      if (bytes_read == -1) //Si 'bytes_read' es ctrl+D
	{
	  printf("Bye\n");
	  break;
	}
      else if (bytes_read == 1) //Si 'bytes_read' es 1, continua
	continue;
      token = strtok(buffer, " \t\n"); //token almacena el buffer dividido por strtok
      array = malloc(sizeof(char *) * 1024);
      if (array == NULL)
	{
	  perror(av[0]);
	  break;
	}
      while (token)
	{
	  array[i] = token; // se guarda el valor original del token
	  if (strcmp(token, "exit") == 0) // se compara token, si es igual a exit, se ejecuta el if. Lo mismo con'env'
	    {
	      printf("Chau...\n");
	      break;
	    }
	  else if (strcmp(token, "env") == 0)
	    {
	      _getenv(env);
	    }
	  token = strtok(NULL, " \t\n");
	  i++;
	}
      if (strcmp(array[0], "exit") == 0)
	{
	  free(array);
	  break;
	}
      if (bool == 1)
	{
	  free(array);
	  continue;
	}
      array[i] = NULL;
      i = 0;
    }
  return 0;
}
