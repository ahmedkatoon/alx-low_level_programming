#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - function that concatenates two strings.
 *@s1: pointer of string
 *@s2: pointer of strings
 *Return: 0
 */
char *str_concat(char *s1, char *s2)
{

unsigned int len1, len2, x, y;
char *con;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);

con = malloc(sizeof(char) * (len1 + len2 + 1));

if (con == NULL)
return (NULL);

for (x = 0; x < len1; x++)
con[x] = s1[x];

for (y = 0; y < len2; y++)
con[x + y] = s2[y];

return (con);
free(con);
}
