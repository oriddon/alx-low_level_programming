include "main.h"
#include <stdlib.h>

/**
 * Write a function that reads a text file and prints it to the POSIX standard output.
 * Prototype: ssize_t read_textfile(const char *filename, size_t letters);
 * Where letters is the number of letters it should read and print
 * Returns the actual number of letters it could read and print
 * If the file can not be opened or read, return 0
 * If filename is NULL return 0
 * If write fails or does not write the expected amount of
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fx;
	ssize_t w;
	ssize_t t;

	fx = open(filename, O_RDONLY);
	if (fx == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fx, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fx);
	return (w);
}
