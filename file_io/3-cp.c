#include "main.h"
/**
 * main - Appends file
 * @argc: argument count
 * @argv: argument vector
 *
 *
 * Return: (0)
 */
int main(int arcg, char *argv[])
{ 
	int file_from, file_to, read_count, close_status;
	char buffer[BUFFER_SIZE];

	if (argv != 3) {
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1) {
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1) {
		close(file_from);
		print_error_and_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((read_count = read(file_from, buffer, BUFFER_SIZE)) > 0) {
		if (write(file_to, buffer, read_count) != read_count) {
			close(file_from);
			close(file_to);
			print_error_and_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (read_count == -1) {
		close(file_from);
		close(file_to);
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	close_status = close(file_from);
	if (close_status == -1) {
		print_error_and_exit(100, "Error: Can't close fd %d\n", file_from);
	}

	close_status = close(file_to);
	if (close_status == -1) {
		print_error_and_exit(100, "Error: Can't close fd %d\n", file_to);
	}

	return (0);
}
