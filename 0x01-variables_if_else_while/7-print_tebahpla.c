#include <stdio.h>

/**
 * main - enrty point
 *
 * Description: point a-z in reverse
 *
 * Return: always 0
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

	return (0);
}
