#include "holberton.h"

/**
 * print_numbers - prints 0123456789\n
 *
 * Return: void
 */


void print_numbers(void)
{
int a;
a = 48;
while (a <= 57)
{
_putchar(a);
a++;
}
_putchar('\n');
}
