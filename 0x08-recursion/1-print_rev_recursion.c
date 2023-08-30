#include "main.h"
/**
 * _print_rev_recursion -  that prints a string in reverse.
 * @s: this is the character in question
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	_putchar(*s);
	}
	else
		_putchar('\n');
}
