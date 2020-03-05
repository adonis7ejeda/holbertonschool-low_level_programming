#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

unsigned int i, j, k, l;
char *s;

if (s1 == NULL)
i = 0;
else
for (i = 0; s1[i]; i++)
;

if (s2 == NULL)
j = 0;
else
for (j = 0; s2[j]; j++)
;

if (j > n)
j = n;

k = i + j + 1;
s = malloc(sizeof(char) * k);

if (s == NULL)
return (NULL);


for (l = 0; l < i; l++)
s[l] = s1[l];


for (l = 0; l < j; l++)
s[l + i] = s2[l];

s[i + j] = '\0';

return (s);
}
