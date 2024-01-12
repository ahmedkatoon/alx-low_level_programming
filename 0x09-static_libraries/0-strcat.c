#include "main.h"
/**
 **_strcat - appends the src string to the dest string
 *@dest: the src string will be appended to it
 *@src: the string will be appended to dest
 *Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int x = 0, y = 0;
while (dest[x])
x++;
while (src[y])
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}
