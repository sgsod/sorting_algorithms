#include <sort.h>

/**
 * bubble_sort - sort array using bubble sort algorithm
 * @array: array of intagers
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp, i, j, sig;

	if (size <= 2)
		return;

	for (i = 0; i < size; i++)
	{
		sig = SORTED;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;

				print_array(array, size);
				sig = UNSORTED;
			}
		}
		if (sig == SORTED)
		{
			break;
		}
	}
}
