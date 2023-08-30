#include "main.h"
/**
 * is_prime_number - checks if the integer is prime
 * @n: integer in question
 * Return: 1(success) or 0 (failure)
 */

int is_prime_number(int n)
{
	int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (is_prime_number(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number(n, 2));
}
}
