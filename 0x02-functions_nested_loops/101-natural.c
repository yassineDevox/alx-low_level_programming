#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;
	int total = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			total += i;
		else if (i % 5 == 0)
			total += i;
		i++;
	}
	printf("%d\n", total);
	return (0);
}
