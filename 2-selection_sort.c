#include "sort.h"

/**
 * selection_sort - sort array using selection sort algorithm
 * @array: array of intagers
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int tmp, *sig;
	size_t i, j;

	if (size <= 2 || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		tmp = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < tmp)
			{
				tmp = array[j];
				sig = array + j;
			}
		}

		if (tmp < array[i])
		{
			*sig = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
