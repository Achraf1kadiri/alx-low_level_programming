#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Calculates the sum of 2 numbers.
 * @a: Argument of the function.
 * @b: Argument of the function.
 * Return: The addition results.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Calculates the difference of 2 numbers.
 * @a: Argument of the function.
 * @b: Argument of the function.
 * Return: The difference results.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Calculates the multiplication of 2 numbers.
 * @a: Argument of the function.
 * @b: Argument of the function.
 * Return: The multiplication results.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Calculates the division of 2 numbers.
 * @a: Argument of the function.
 * @b: Argument of the function.
 * Return: The division results.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Calculates the remainder of the division.
 * @a: Argument of the function.
 * @b: Argument of the function.
 * Return: The remainder of the division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
