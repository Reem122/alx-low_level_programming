#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: task 9 - Variables, if, else, while - alx
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	putchar('$');
	return (0);
}
