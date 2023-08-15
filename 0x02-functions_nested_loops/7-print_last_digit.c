#include "main.h"
/**
 * print_last_digit - prints the last digit of the integer in question
 * @l: this is the integer i question
 * Return: r(last digit value)
 */
int print_last_digit(int l)
{
int r;
r = l % 10;
	if (l < 0)
	r = -r;
	_putchar (r + '0');
	return (r);
}
