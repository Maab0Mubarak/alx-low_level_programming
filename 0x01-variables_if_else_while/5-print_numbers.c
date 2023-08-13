#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers in function 'main'
 *
 * return: always 0
 *
 */

int (void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}

