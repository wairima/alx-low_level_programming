#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	twoD = malloc(sizeof(int *) * height);
	if (twoD == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		twoD[i] = malloc(sizeof(int) * width);
		if (twoD[i] == NULL)
		{
			for (; i >= 0; i--)
				free(twoD[i]);
			free(twoD);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			twoD[i][j] = 0;
	}
	return (twoD);
}
