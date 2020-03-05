#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */

int *array_range(int min, int max)
{

int *a;
int i;

if (min > max)
return (NULL);

a = malloc(sizeof(int) * max + 1);

if (a == NULL)
return (NULL);

for (i = 0; i <= max; i++)
a[i] = i;
min++;

return (a);
}
