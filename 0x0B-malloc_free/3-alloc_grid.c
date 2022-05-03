#include "holberton.h"
/**
 * alloc_grid - Return a pointer to a 2 dimensional array of integers.
 * @width: Columns.
 * @height: Rows.
 * Return: Pointer to a 2 dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int l, c;
	int **p;

	l = c = 0;
	p = NULL;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
/*Create a pointer to pointer rows*/
	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		return (NULL);
	}
/*For each row create a pointer to each element*/
	for (l = 0; l < height; l++)
	{
		p[l] = malloc(sizeof(int) * width);

		if (p[l] == NULL)
		{
			for (p[l] -= 1; l >= 0; l--)
			{
				free(p[l]);
			}
			free(p);
			return (NULL);
		}
	}
/*Fill the array*/
	for (l = 0; l < height; l++)
	{
		for (c = 0; c < width; c++)
			p[l][c] = 0;
	}
	return (p);
}
