#incude "main.h"

/**
 * print _numbers - print numbers from 0 - 9
 * Return: void
 */

void print_most_numbers(void);
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar ('\n');
}
