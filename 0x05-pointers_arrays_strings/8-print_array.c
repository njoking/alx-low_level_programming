#include <stdio.h>
#include "main.h"
/**
  * print_array - prints one char out of 2
  * @a: pointer array
  * @n: array positions
  * Return: void
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
