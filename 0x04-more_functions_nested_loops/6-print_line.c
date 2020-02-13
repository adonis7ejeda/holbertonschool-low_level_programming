#include "holberton.h"

/**
 * print_line - prints an underscore n times
 * @n: number of times printed
 *
 * Return: void
 */


void print_line(int n)
{

int b;

for (b = 1; b <= n; b++)
{

if (b <= 0)
{

_putchar('\n');

}

_putchar('_');

}

_putchar('\n');

}
