#include "main.h"
#include <unistd>
/**
 * _putchar - write c to stdout
 * @c: to print
 *
 * Return: on succes 1
 * Return; on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
