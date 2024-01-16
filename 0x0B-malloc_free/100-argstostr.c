#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *argstostr - function that concatenates all the arguments
 *@ac: argument counter
 *@av: argument vector
 *
 *Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	int total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];
		int len = 0;

		while (arg[len] != '\0')
		{
			len++;
		}
		total_len = len + 1;
	}
	   char *str = (char *) malloc(total_len * sizeof(char));
}
