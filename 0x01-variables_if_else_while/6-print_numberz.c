#include <stdio.h>
#include <unistd.h>

/**
 * main - point of entry
 * Description: prints char below 10
 * Return: Always 0
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		putchar(b + '0');
	}

	putchar('\n');

	return (0);



}

