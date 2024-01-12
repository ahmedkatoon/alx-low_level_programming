#include "main.h"
#include <stdio.h>
/**
 *_puts -  function that prints a string, followed by a new line
 *@str: the string to be ptinted
 *_putchar prints a new line
 */
void _puts(char *str)
{
int x = 0;
while (str[x] != '\0')
{
_putchar(str[x]);
x++;
}
_putchar('\n');
}
