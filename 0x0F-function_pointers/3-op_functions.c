#include <stdio.h>
#include "3-calc.h"


/**
* op_add - returns the sum of a and b
* @a: first input
* @b: 2nd input
* Return: the sum of a and b
*/

int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}


/**
* op_sub - returns the difference of a and b
* @a: first input
* @b: 2nd input
* Return: the difference of a and b
*/


int op_sub(int a, int b)
{
	int sub = a - b;

	return (sub);
}


/**
* op_mul - returns the product of a and b
* @a: first input
* @b: 2nd input
* Return: the product of a and b
*/

int op_mul(int a, int b)
{
	int product = a * b;

	return (product);
}


/**
* op_div - returns the result of the division of a by b
 * @a: first input
 * @b: 2nd input
* Return: the division of a by b
*/
int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}


/**
* op_mod - returns the remainder of the division of a by b
* @a: first input
* @b: 2nd input
* Return: the remainder of the division of a by b
*/

int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
