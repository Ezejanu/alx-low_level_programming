#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: string for which the function returns its length
 * Return: length of string
 */

int _strlen(char *s)
{
	int a = 0;

	/**
	 * for (a = 0; s[a] != '\0'; a++)
	 * {
	 * if (a >= 10)
	 * {
			_putchar(a/10 + '0');
		}
			_putchar(a%10 + '0');
	}
*/
	while (s[a] != '\0')
		a++;
	return (a);
}
