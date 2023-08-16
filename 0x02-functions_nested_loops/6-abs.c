#include "main.h"

/**
 * _abs - function that computes the absolute value of an integar
 *
 * @n: takes an integar type input for function
 *
 * Return: always 0
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}

