#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char c[9] = "Holberton";
int a;
for (a = 0; a < 9; a++)
{
_putchar(c[a]);
}

putchar('\n');

return (0);
}
