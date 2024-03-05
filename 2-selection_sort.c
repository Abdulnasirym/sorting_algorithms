#include "sort.h"

/**
 * selection_sort - function that sort using selection sorting algorithm
 * @array: array of integers to sort
 * @size: size of array to sort
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		size_t temp = i;
		size_t swap;

		for (j = i + 1; j < size; j++)
		{
			if (array[temp] > array[j])
			{
				temp = j;
			}
		}
		if (temp != i)
		{
			swap = array[i];
			array[i] = array[temp];
			array[temp] = swap;
			for (k = 0; k < size; k++)
			{
				printf("%d", array[k]);
				if (k != size - 1)
					printf(", ");
			}
			printf("\n");
		}

	}
}
