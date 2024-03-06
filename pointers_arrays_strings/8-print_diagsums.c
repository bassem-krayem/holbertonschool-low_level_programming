#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int sum_primary = 0, sum_secondary = 0;
	int row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
				sum_primary += *(a + row * size + col);

			if (row + col == size - 1)
				sum_secondary += *(a + row * size + col);
		}
	}

	printf("%d, %d\n", sum_primary, sum_secondary);
}
