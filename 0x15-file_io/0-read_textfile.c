#include "main.h"
#include <stddef.h>
#include <stdlib.h>


/**
* read_textfile - a function that reads a text file
* and prints it to the POSIX standard output
* @filename: pointer to the file to be read
* @letters: is the number of letters it should read and print
* Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t rd, wr, NF;

	if (filename == NULL)
		return (0);

	NF = open(filename, O_RDONLY);
	if (NF < 0)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		free(str);
		return (0);
	}
	rd = read(NF, str, letters);
	if (rd < 0)
	{
		free(str);
		close(NF);
		return (0);
	}

	wr = write(STDOUT_FILENO, str, rd);

	free(str);
	close(NF);

	return (wr);
}
