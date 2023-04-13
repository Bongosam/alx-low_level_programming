#include "main.h"
/**
* main - Programme to copy from file_from to file_to.
*
* @ac: Number of command lines
* @av: Contains the names of files (file_from and file_to).
*
* Return: 0 if it succed.
*/
int main(int ac, char **av)
{
	int fd_from, fd_to, nbread, nbwrote;
	char *file_from = av[1], *file_to = av[2], buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	while ((nbread = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		nbwrote = write(fd_to, buffer, nbread);
		if (nbwrote != nbread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (nbread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
