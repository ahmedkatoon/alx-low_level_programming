#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *_strdup - returns a pointer to a newly allocated space.
 *@str: pointer ro char
 *Return: NULL if str = NULL
*/
char *_strdup(char *str)
{
unsigned int x;
char *ptr;

if (str == NULL)
return (NULL);

ptr = malloc(sizeof(char) * (strlen(str) + 1));
if (ptr == NULL)
return (NULL);

for (x = 0; x < strlen(str); x++)
ptr[x] = str[x];

return (ptr);

free(ptr);
}
