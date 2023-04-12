#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates matrix
 * @width: width of array
 * @height: height of array
 * Return: pointer of new grid
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int q;
	int r;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **)malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);

	for (q = 0; q < height; q++)
	{
		p[q] = (int *)malloc(sizeof(int) * width);
		if (p[q] == NULL)
		{
			for (r = 0; r < q; r++)
			{
				free(p[r]);
			}
			free(p);
		}
	}

	for (q = 0; q < height; q++)
		for (r = 0; r < width; r++)
			p[q][r] = 0;

	return (p);
}
