#include "holberton.h"

/**
 * _strncat - concatenates one string (number of byte given)
 * to another
 * @dest: where to concatenate
 * @src: string to concatenate
 * @n: how many bytes to
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
}

for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}

return (dest);

}
