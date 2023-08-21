#include "main.h"
/**
 * swap_int - swaps the value of the integers in question
 * @a: one of the integer in question
 * @b: another character in question
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
