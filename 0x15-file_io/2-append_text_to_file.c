#include "main.h"

/**
 * append_text_to_file - Code appends text at end of file
 * @text_content: String added to end of file.
 * @filename: Points to name of file.
 *
 * Return: If filename is NULL or function fails - -1.
 *         If file doesn't exist the user lacks write permissions - -1.
 *         Otherwise - 1.
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
