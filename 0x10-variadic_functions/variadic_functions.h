#ifndef VARIADIC_TO_FUNCTIONS_H
#define VARIADIC_TO_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
#endif
