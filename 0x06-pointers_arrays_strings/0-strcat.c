#include "holberton.h"

/**
 * _strcat - appends strings
 * @dest: destination to append
 * @src: what to append
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{

int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
}

for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}

i++;
dest[i] = '\0';

return (dest);

}
