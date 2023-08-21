#include "main.h"
/**
 * puts_half - displays half the string
 * @str: this is the string in question
 * Return: void
 */

void puts_half(char *str)
{
	int i, m;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	m = (count - 1) / 2;
	for (i = m + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
