#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: Adding to it that src points to.
 * @src: Adding it to dest.
 * @n: The number of bytes will be added from src to dest.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int x = 0, y = 0;
while (dest[x])
x++;
while (y < n && src[y])
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}

