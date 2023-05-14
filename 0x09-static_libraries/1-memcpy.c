#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: destination to be copied to
 * @src: source to be copied from
 * @n: size
 * Return: value at destination (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
