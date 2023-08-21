#include "main.h"
/**
 * puts2 - prints every character of the string in question
 * @str: this is the string in question
 * Return; void
 */

void puts2(char *str)
{
	int m;

	for (m = 0 ; str[m] != '\0' ; m++)
	{
		if (m % 2 == 0)
		_putchar (str[m]);
	}
	_putchar('\n');
}
