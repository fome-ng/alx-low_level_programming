#include "function_pointers.h"

/**
 * @print_name - Write a function that prints a name
 * @f: function of name
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *));
{
	if (name != NULL && f != NULL)

		f(name);
}

