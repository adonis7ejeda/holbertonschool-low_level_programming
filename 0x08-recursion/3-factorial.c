#include "holberton.h"

/**
 * factorial - prints factorial
 * @n: number
 * Return: 0 if n is lower, return -1 to indicate an error
 */

int factorial(int n)
{

if (n == 0)
return (1);

if (n < 0)
return (-1);

return (n * factorial(n - 1));

}
