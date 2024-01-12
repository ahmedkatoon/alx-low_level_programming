#include "main.h"
/**
* _memset - function that fills memory with a constant byte
* @s: pointer to the memory
* @b: constant byte
* @n: bytes of the memory
*
* Return: pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	while (n--)
		*temp++ = b;

	return (s);
}
