#include "function_pointers.h"
/**
 *int_index - function that searches for an integer.
 *@array: pointer to int
 *@size: size of array
 *@cmp: pinter to function
 *
 *Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (size <= 0)
return (-1);
if (array != NULL && cmp != NULL)
{
for (x = 0; x < size; x++)
{
if (cmp(array[x]) != 0)
return (x);
}
}
return (-1);

}
