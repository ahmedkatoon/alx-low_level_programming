#include "main.h"
#include <stdlib.h>
/**
 *free_grid - function that frees a 2 dimensional grid
 *@grid: pointer to the 2D array
 *@height: number of rows
 *
 *Return: 0
 */
void free_grid(int **grid, int height)
{
int h;

for (h = 0; h < height; h++)
free(grid[h]);

free(grid);
}
