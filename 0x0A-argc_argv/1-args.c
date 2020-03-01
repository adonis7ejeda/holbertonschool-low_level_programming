#include <stdio.h>

/**
 * main - prints the number of arguements you passed to it
 * @argc: arguement count
 * @argv: arguments you pass to progrm
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char **argv)
{
printf("%d\n", argc-1);
return (0);
}
