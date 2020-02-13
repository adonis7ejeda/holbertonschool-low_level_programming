#include "holberton.h"

/**
 * more_numbers - prints 01234567891011121314\n x10
 *
 * Return: void
 */


void more_numbers(void)
{

int a;
char b;
char c;

for (a = 1; a <= 10; a++)
{

for (b = '0'; b <= '9'; b++)
{

_putchar(b);
if (b == '9')
{

for (c = '0'; c <= '4'; c++)
{

_putchar('1');
_putchar(c);

}

}

}

_putchar('\n');

}

}
