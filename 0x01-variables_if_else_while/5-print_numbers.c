#include <stdio.h>
#include <unistd.h>


/**
 * main - point of entry
 * Description: prints char below 10
 * Return: Always 0
 */

int main(void)

{
	int s;

	for (s = 0; s < 10; s++)

	{
	putchar(s + '0');
	}

	putchar('\n');

	return (0);
}
