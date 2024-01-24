#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - fun print name
 *@name: name will print
 *@f: fun pointer
 *
 *Return: 0
 *
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
