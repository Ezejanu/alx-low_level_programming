#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
{
	int ls = 0; /* ls is length of the string */
	int mp = (ls / 2); /* mp is the midpoint of the string */
	int m; /* m is used as the marker */

	while (*s != '\0')
	{
		s++;
		ls++;
			/**
			* ls is also counting so we can use it in the code below.
			* Using s in the code below gives the error
			* 'comparison between pointer and integer'
			*/
	}

	for (m = 0; m < ls; m++)
		m--;

	for (m = 0; m < mp; m++)
	{
		int last = ls - 1;

		char last_char = s[last - m];

		s[last - m] = s[m];
		s[m] = last_char;
	}
}
