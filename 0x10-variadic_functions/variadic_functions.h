# ifndef _VARIADIC_FUNCTIONS_H_
# define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

typedef struct printargument
{
	char *typeargument;
	void (*func)();
} printargument;

void print_c(va_list valist);
void print_i(va_list valist);
void print_f(va_list valist);
void print_s(va_list valist);

#endif
