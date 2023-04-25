#include "sort.h"

/**
 * swap_int - swap two integers
 * @a: first int to be swapped
 * @b: second int to be swapped
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - sort an array using bubble sort
 * @array: array to be sorted
 * @size: size of array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bub_sort = false;

	if (array == NULL || size < 2)
		return;

	while (bub_sort == false)
	{
		bub_sort = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_int(array + i, array + i + 1);
				print_array(array, size);
				bub_sort = false;
			}

		}
		len--;
	}
}

