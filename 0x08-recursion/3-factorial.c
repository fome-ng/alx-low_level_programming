#include "main.h"

/**
* int factorial - a function that returns the factorial of a given number
* @s: interger arams
* Return: recursion
*/

int factorial(int n)
{
	if (n<0)
	{
		return (-1); 
	}
	if (n == 1)
		return (1);
	{
	return (n = factorial(n - 1));
}
