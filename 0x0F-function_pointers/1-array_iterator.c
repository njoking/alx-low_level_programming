#include "function_pointers.h"
/**
 * array_iterator - function that executes function element
 * @array: this is the array in quetion
 * @size: this is the size of the array
 * @action: pointer to the function in use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for (i = 0; i < (int)size; i++)
			action(array[i]);
}
