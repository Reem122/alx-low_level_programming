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
	
	char* arr;
	sprintf(arr, "%d", n);
	
	if (arr[-1] > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, arr[-1]);
	}
	
	return (0);
}
