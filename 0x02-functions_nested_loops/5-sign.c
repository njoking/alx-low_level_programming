#include "main.h"
/**
 * print_sign - prints the sign of the character in reference to 0
 * @n: this is the charecter in question
 * Return: 1(positiive) or 0(neutral) or -1(negative)
 */

int print_sign(int n)
{
	if (n > 0)
{
_putchar('+');
	return (1);
}
else if (n == 0)
{
_putchar('0');
	return (0);
}
else if (n < 0)
{
_putchar('-');
	return (-1);
}
_putchar('\n');
}
