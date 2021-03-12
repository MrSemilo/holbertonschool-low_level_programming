#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list c;

if (separator == NULL)
separator = "";

va_start(c, n);

for (i = 0; i < n; i++)
{
if (i == (n - 1))
printf("%d", va_arg(c, int));
else
printf("%d%s", va_arg(c, int), separator);
}
printf("\n");
va_end (c);
}
