#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: num of strings
 * Return: ntg
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *geral;

va_start(valist, n);
for (i = 0; i < n; i++)
{
geral = va_arg(valist, char *);
if (geral == NULL)
printf("(nil)");
else
printf("%s", geral);
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
