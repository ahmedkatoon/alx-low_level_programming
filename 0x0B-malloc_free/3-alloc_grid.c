#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - function return pointer to a 2 dimensional array of integers
 *@width: width of array
 *@height: height of array
 *
 *Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
int h, w;
int **ptr;

if (width <= 0 || height <= 0)
return (NULL);

ptr = (int **)malloc(height * sizeof(int *));

if (ptr == NULL)
return (NULL);

for (h = 0; h < height; h++)
{
ptr[h] = (int *)malloc(width * sizeof(int));
if (ptr[h] == NULL)
{
for (w = h - 1; w >= 0; w--)
free(ptr[w]);

free(ptr);

return (NULL);
}
}
for (h = 0; h < height; h++)
{
for (w = 0; w < width; w++)
ptr[h][w] = 0;
}

return (ptr);

free(ptr);
}
