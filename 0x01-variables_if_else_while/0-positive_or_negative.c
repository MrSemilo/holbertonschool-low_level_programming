#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if n > 0
	{
	prinft("is positive\n");
	}
	else if n == 0
	{
	printf("is zero\n");
	}
	else if n < 0
	{
	printf("is negative\n");
	}
	/* your code goes there */
	return (0);
}
