#include "main.h"
/**
 * print_error_and_exit - Prints error message
 * @code: exit code
 * @message: error message
 * @filename: file name that has errror
 *
 *
 */
void print_error_and_exit(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}

/**
* open_file - Opens a file with certain flags/permissions
* @file_name: file name
* @flags: flags for open
* @permissions: Allows to open
*
* Return: File descriptor, -1 if fails
*/
int open_file(const char *file_name, int flags, int permissions)
{
	return (open(file_name, flags, permissions));
}

/**
* copy_content - Copies content of file
* @fd_from: file descriptor, source file
* @fd_to: file descriptor, destination file
*
* Return: Copied content
*/
void copy_content(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t rd_bytes, wr_bytes;

	while ((rd_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr_bytes  = write(fd_to, buffer, rd_bytes);
		if (wr_bytes != rd_bytes)
		{
			print_error_and_exit(99, "Error: Can't write to file\n", NULL);
		}
		if (rd_bytes == -1)
		{
			print_error_and_exit(98, "Error: Can't read from filr\n", NULL);
		}
	}
}
