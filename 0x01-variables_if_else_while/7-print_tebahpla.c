#include <stdio.h>

/**
 * main - enrty point
 *
 * description: point a-z in reverse
 *
 * return: always 0
 *
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return(0);
}
