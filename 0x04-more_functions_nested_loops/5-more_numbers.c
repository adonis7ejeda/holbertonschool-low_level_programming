#include "holberton.h"

/**
 * more_numbers - prints 01234567891011121314\n x10
 *
 * Return: void
 */


void more_numbers(void)
{
char a, b, c, i;
for (i = 1; i <= 10; i++)
{

for (a = 0; a <= 14; a++)
{

if (a < 10)
{

b = a;

}
else
{

c = a / 10;
b = a % 10;
_putchar(c + '0');

}
_putchar(b + '0');
}
_putchar('\n');
}

}
