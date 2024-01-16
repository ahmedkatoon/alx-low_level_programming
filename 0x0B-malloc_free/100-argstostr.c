#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *argstostr - function that concatenates all the arguments
 *@ac: argument counter
 *@av: argument vector
 *
 *Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
char *ptr;
int x;

if (ac == 0 || av == NULL)
return (NULL);

ptr = malloc(sizeof(char) * (ac + 1) * 2);
if (ptr == NULL)
return (NULL);

for (x = 0; x < ac; x++)
{
ptr[x] = *((char *)av[x]);
putchar('\n');
}
ptr[x] = '\0';
return (ptr);

free(ptr);
}
