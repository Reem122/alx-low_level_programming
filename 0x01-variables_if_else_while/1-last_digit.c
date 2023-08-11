#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: task 1 - Variables, if, else, while - alx
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int last = n%10
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last);
	}
	
	return (0);
}
