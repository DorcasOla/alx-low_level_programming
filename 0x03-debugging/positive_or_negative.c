#include "main.h"

/**
 * positive_or_negative - is the function
 * i- decides whether it is positive, negative, or zero.
 *
 * Return: Always 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
