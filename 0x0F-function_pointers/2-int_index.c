#include "function_pointers.h"
/**
 * int_index - afunction that searches for integers
 * @array: the arrayin question
 * @size: number of elements in the array
 * @cmp: returns indexofthe first element
 * Return: -1 or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
		for (i = 0; i < (int)size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
