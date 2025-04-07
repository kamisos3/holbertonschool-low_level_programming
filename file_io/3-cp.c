#include "main.h"
/**
 * main - Appends file
 * @argc: argument count
 * @argv: argument vector
 *
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	{
		print_error_and_exit(99, "Error: Can't write to %s\n", NULL);
	}
	fd_from = open_file(argv[1], O_RDONLY, 0);
	if (fd_from == -1)
	{
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_error_and_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	copy_content(fd_from, fd_to);

	if (close(fd_from) == -1)
	{
		print_error_and_exit(100, "Error: Can't close fd %d\n", NULL);
	}

	if (close(fd_to) == -1)
	{
		print_error_and_exit(100, "Error: Can't cloose fd %d\n", NULL);

	}
	return (0);
}
