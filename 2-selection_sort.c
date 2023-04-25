#include "sort.h"

/**
 * swap_int - swap 2 int
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - selection sort
 * @array: array to sort
 * @size: size of array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	int *minimum;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minimum = array + 1;
		for (j = 1 + i; j < size; j++)
			minimum = (array[j] < *minimum) ? (array + j) : minimum;
		if ((array + i) != minimum)
		{
			swap_int(array + 1, minimum);
			print_array(array, size);
		}
	}
}
