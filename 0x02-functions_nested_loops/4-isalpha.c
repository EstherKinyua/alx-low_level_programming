#include "main.h"

/**
 * _isalpha -> checks if characters have alphabetic order
 * @c: a character argument
 * Return: Returns 1 and 0 depending on condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

