#include "main.h"
#include <stdlib.h>
/**
 *create_array -  function that creates an array of chars,
 *@size: size of the array
 *@c: specific cahr
 *
 *Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
unsigned int x;
char *ptr;
if (size == 0)
return (NULL);

ptr = (char *) malloc(size * sizeof(char));
if (ptr == NULL)
return (NULL);

for (x = 0; x < size; x++)
ptr[x] = c;

return (ptr);
}
