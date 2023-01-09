#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char.
 * @c: char to initialize
 * @size: number of bytes
 * Return: 0 means success except defined otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || arary == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		array[size] = c;
	}
	return (array);
}
