#include "main.h"

/**
 * write a function that appends text at the end of a file.
 * prototype: int append_text_to_file(const char *filename, char *text_content);
 * where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
 * return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * if filename is NULL return -1
 * if text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1
 *  if the file does not exist or if you do not have the required permissions to write the file
 */
int create_file(const char *filename, char *text_content)
{
	int fx, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fx = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fx, text_content, len);

	if (fx == -1 || w == -1)
		return (-1);

	close(fx);

	return (1);
}
