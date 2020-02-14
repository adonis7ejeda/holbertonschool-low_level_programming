#include <stdio.h>
#include "holberton.h"

/**
 * main - entry point
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 *
 * Return: always 0
 */
int main(void)
{

int a;
for (a = 1; a <= 100; a++)
{
if ((a % 3 == 0) && (a % 5 == 0))
{
printf("FizzBuzz");
}
else if (a % 5 == 0)
{
printf("Buzz");
}
else if (a % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%i", a);
}
if (a < 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
