#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - function that prints strings, followed by a new line.
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 *
 *Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
char *s;
va_list ptr;

va_start(ptr, n);

for (x = 0; x < n; x++)
{
s = va_arg(ptr, char *);

if (s == NULL)
printf("(nil)");
else
printf("%s", s);

if (separator != NULL && x < n - 1)
printf("%s", separator);
}

putchar('\n');

va_end(ptr);

}
