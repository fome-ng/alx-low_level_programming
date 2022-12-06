







int main(int argc, char **argv)
{
	int fd1, fd2, r, w;
	char *buff;
	
	if (argc !=3)
	{
		dprintf(STDERR_FILENO, 
				"usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	fd1 = open (argv[1], 0_RDONLY);
	r = (fd1, buff, 1024);
	fd2 = open(arg[2], O_CREAT | O_RDWR | O_TRUNC, 0664);

	do
	{
		if (fd1 == -1 || fd2 == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file 					%s\n, argv[1]);
			exit(98);
		}
		w = write(fd2. buff, r);
return (0);
}

/**
 * create_buff - allocates memory
 * *str:  pointer to allocate memory to
 * Return: address to the allocated memory
 */
 
 char *create_buff(char *str)
{
	char *buff;
	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", str			);
		exit(99);
	}

	return (uff);
}
