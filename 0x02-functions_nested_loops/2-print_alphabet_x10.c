#include "main.h"
/**
 * print_alphabet_x10 - prints lower case alphabet ten times
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int f;
	char g;

for (f = 1 ; f <= 10 ; f++)
	{
for (g = 'a' ; g <= 'z' ; g++)
_putchar(g);
	_putchar('\n');
}
}
