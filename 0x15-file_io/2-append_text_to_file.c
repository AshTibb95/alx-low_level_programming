#include "main.h"

/**
 * append_text_to_file - text at end of file will be appended
 * @filename: points to name of file
 * @text_content: at the end of file, this string will be added
 * Return: NULL - -1, or - - 1 if user does not have write permission
 * otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int o, w, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
	len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
	return (-1);

	close(o);

	return (1);

}
