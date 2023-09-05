#include "main.h"

/**
 * create_array -  creates an array of char
 * @c: this is the character in question
 * @size: the size of the character in question
 * Return: Pointer to array or Null if its 0
 */
char *create_array(unsigned int size, char c)
{
	size_t m;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (malloc(sizeof(char) * size));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (m = 0 ; m < size ; m++)
	{
		ptr[m] = c;
	}
	return (ptr);
}
