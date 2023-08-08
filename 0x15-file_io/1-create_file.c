#include "main.h"

/**
 * create_file - Code helps creates a file.
 * @text_content: A pointer to str to write.
 * @filename: The pointer to name of file to create.
 *
 * Return: On function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fa, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fa = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fa, text_content, length);

	if (fa == -1 || w == -1)
		return (-1);

	close(fa);

	return (1);
}
