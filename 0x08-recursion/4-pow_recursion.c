#include "main.h"
/**
 * _pow_recursion - Recursively calculates raising x to the power of y.
 * @x: The base to be raised.
 * @y: The exponent power.
 * Return: The result of the mathematical operation.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1);
    if (y == 0)
        return (1);
    return (x * _pow_recursion(x, y - 1));
}
