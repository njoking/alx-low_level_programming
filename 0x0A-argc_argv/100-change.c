#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimal number of coin change
 * @argc: number of command line arguement
 * @argv: array of command line arguementt
 * Return: (0)success 1(failure)
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		if (cents >= 10)
			cents -= 10;
		if (cents >= 5)
			cents -= 5;
		if (cents >= 2)
			cents -= 2;
		if (cents >= 1)
			cents -= 1;
		coins += 1;

	}
	printf("%d\n", coins);
	return (0);
}
