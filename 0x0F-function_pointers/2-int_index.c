#include "function_pointers.h"

/**
 * int_index - This searches for an integer
 * @array: Array's pointer
 * @size: Array's size
 * @cmp: pointer used to compare values inZZ function
 *
 * Return: Provide the index of the initial element that does not return a 0
 * when evaluated with the comparison (cmp) function
 * or return -1 if no match is discovered, or if the size is negative.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}

	return (-1);
}
