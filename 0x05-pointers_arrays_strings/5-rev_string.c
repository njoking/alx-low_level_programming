#include "main.h"
/**
 * rev_string - this is the function that reverses the string in question
 * @s: this is the string i question
 * Return: void
 */

void rev_string(char *s)
{
	int d;
	char c;
	int count = 0;

	for (d = 0 ; s[d] != '\0' ; d++)
	count++;
	for (d = 0 ; d < count / 2 ; d++)
	{
		c = s[d];
		s[d] = s[count -  1 - d];
		s[count - d - 1] = c;
	}
}
