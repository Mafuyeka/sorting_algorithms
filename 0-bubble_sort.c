#include "sort.h"

/**
 * bubble_sort - Sorts the elements of an array from min to max value
 * @size: Size of the array of bubble_sort
 * @array: The pointer to an array of bubble_sort
 */

void bubble_sort(int *array, size_t size)

{

	size_t i, index, tmp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (index = 0; index < size; index++)
		{
			if (array[index] > array[index + 1] && array[index + 1])
			{
			tmp = array[index];
			array[index] = array[index + 1];
			array[index + 1] = tmp;
			print_array(array, size);
			}
		}
}
