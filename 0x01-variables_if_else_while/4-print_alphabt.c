#include <stdio.h>

/**
 * main - prints alphabet in lowercase.
 *
 * Return: Always 0 when (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}

	}
		putchar('\n');
return (0);
}

