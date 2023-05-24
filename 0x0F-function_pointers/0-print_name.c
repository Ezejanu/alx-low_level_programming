#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - a function that prints a name
* @name: name to be printed
* @f: pointer to function
*/

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	/* i.e if (f != null and name != null,
	meaning they are both valid inputs) */
	(*f)(name);
}
