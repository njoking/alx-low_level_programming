#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: this is a character in question
 * @f: another character in question
 * Return: nameto be printed
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
