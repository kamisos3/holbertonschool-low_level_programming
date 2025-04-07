#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int print_error_and_exit(int code, const char *message, const char *filename);
int open_file(const char *filename, int flags, int permissions);
int copy_content(int fd_from, int fd_to);

#endif
