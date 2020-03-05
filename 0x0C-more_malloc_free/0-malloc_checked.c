#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: parameter
 * Return: Pointer
 */

void *malloc_checked(unsigned int b)
{

void *a;
a = malloc(b);

if (a == NULL)
exit(98);

return (a);

}
