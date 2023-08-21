#include "main.h"
/**
 * puts_half -prints half of a string of the character
 * @str: this is the string in question
 * Return: void
 */

void puts_half(char *str)
{
	int b, c;
	int count = 0;

	for (c = 0 ; str[c] != '\0' ; c++)
		count ++;
	b = (count -1) / 2;
	for (c = b + 1 ; str[c] != '\0' ; c++)
		_putchar(str[c]);
	_putchar('\n');
}
