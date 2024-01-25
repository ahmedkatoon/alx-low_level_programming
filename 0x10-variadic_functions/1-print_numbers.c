#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - function that prints numbers
 *@separator: the string to be printed
 *@n: numbers of integers
 *
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;

va_start(ptr, n);

for (i = 0; i < n; i++)
{
if (separator == NULL || i == n - 1)
printf("%d", va_arg(ptr, int));
else
printf("%d%s", va_arg(ptr, int), separator);
}

putchar('\n');

va_end(ptr);
}
