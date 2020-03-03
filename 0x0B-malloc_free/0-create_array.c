#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes it with a specific char
 * @size: size of array to be created
 * @c: char to initialize array with
 *
 * Return: pointer to the array or NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{

char *str;
unsigned int i;
if (size == 0)
return (NULL);

str = malloc(sizeof(char) * size);

for (i = 0; i < size; i++)
str[i] = c;

return (str);
}
