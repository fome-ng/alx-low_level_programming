#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc - argument count
 * @argv - array containing command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
