#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Print number from 0 to 9 without using char
 * Return: 0 for success
 */
int main(void)
{
int ch;

for (ch = 0; ch <= 9; ch++)
putchar(ch + '0');
putchar('\n');
return (0);
}
