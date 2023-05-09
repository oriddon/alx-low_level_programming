#include "main.h"

/**
 * Write a function that appends text at the end of a file.
 * If text_content is NULL, do not add anything to the file. 
 * Return 1 if the file exists and -1 if the file does not exist or 
 * if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, len);

	if (a == -1 || w == -1)
		return (-1);

	close(a);

	return (1);
}
