#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet letters 
 *
 * return: always 0
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	     putchar (ch);
	     ch++;
	}
	putchar('\n');
	
	return (0);;
}
