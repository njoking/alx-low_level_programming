#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: thisis the string in question
 * @needle: this is the substring in question
 * Return: pointer to the beginning of the located string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}

