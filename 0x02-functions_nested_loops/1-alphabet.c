#include "main.h"

/**
 *  print_alphabet - prints alphabets in lower case
 *
 *  Return:  always 0 (success)
 */
void print_alphabet(void)
{
	char f;


	for (f = 'a' ; f <= 'z' ; f++)
		_putchar(f);
	_putchar('\n');
}
