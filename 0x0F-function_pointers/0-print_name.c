#include "function_pointers.h"

/**
 * print_name - Write a function that prints a name
 * @name: name given
 * @f: funtion of name
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *));
{
	if (!name || !f)
		return;
	f(name);
}

