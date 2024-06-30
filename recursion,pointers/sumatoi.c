#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: parameter
 * @argv: parameter
 * Return: 0 / 1
 */
int main(int argc, char *argv[])
{
int a = 0;
int b;
int c = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (b = 1; b < argc; b++)
{
while (argv[b][c] != '\0')
{
if (argv[b][c] < '0' || argv[b][c] > '9')
{
printf("Error\n");
return (1);
}
c++;
}
a += atoi(argv[b]);
}
printf("%d\n", a);
return (0);
}
