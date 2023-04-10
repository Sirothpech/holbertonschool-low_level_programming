#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: longueur string
 * Return: value string
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s++)
		a++;
	return (a);
}

/**
 * create_file - function that creates a file
 * @filemane: file
 * @text_content: string to write into the file
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		write(STDERR_FILENO, "fails\n", 6);
		return (-1);
	}

	if (text_content != NULL)
	{
		len = write(fd, text_content, _strlen(text_content));
		if (len == -1)
		{
			write(STDERR_FILENO, "fails\n", 6);
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
