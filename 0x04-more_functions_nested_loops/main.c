#ifndef MAIN_H
#define MAIN_H

#include "main.h"
#include <stdio.h>

#endif /* MAIN_H */

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
