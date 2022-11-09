#include <stdio.h>

/**
 * main - write a program that prints all arguments it receives.
 * @argv: array that prints out all arguments
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
		int counter;

		for (counter = 0; counter < argc; counter++)
			printf("argv[%2d]: %s\n", counter, argv[counter]);

		return (0);
}
