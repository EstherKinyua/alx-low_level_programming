#include "main.h"

/**
 * print_last_digit -> prints last digit of a number
 * @n: the passed args
 * Return: last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	_putchar(x + '0');
	return (x);
}
