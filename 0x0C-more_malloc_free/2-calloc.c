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

void *a;

if (nmemb == 0 || size == 0)
return (NULL);
else
a = calloc(nmemb, size);

if (a == NULL)
return (NULL);

return (a);
}
