#include <stdio.h>
/**
 * main - prints hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 0;

	while (ch < 10)
	{
		putchar(ch + '0');
		ch++;
	}
	ch = 'f';
	while (ch <= 'f')
	{
		putchar (ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
