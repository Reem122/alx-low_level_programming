#include <stdio.h>
#include <string.h>

/**
 * main -Entry point
 *
 * Description: task 4 - Variables, if, else, while - alx
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
