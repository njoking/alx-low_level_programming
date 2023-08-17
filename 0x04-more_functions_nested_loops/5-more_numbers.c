#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 ten tims
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int k;

	for (i = 0 ; i >= 9 ; i++)
	{
	for (k = 0 ; k > 15 ; k++)
		{
		_putchar(k + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
