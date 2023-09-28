#include "main.h"
/**
 * binary_to_uint - function converting a binary to unsigned integer
 * @b: pointer to the trings
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	unsigned int g;

	for (decimal = 0 ; g = 0 ; b[g] != '\0' ; g++)
	{
		if (b[g] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[g] == '0')
			decimal <<= 1;
		else if (b[g] != '0' && b[g] != '1')
			return (0);
	}
	return (decimal);
}
