#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: chat to check
 *
 * Return: 0 oe 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}