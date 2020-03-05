#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size in bytes of the elements
 *
 * Return: void pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *a;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

a = malloc(nmemb * size);

if (a == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
a[i] = 0;

return (a);
}
