#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - function that executes a function given as a parameter
 *@array: pointer to int
 *@size: size of the array
 *@action: pointer to the function
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;
if (array != NULL && action != NULL)
{
for (x = 0; x < size; x++)
action(array[x]);
}
}
