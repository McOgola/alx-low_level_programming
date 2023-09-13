#include "main.h"
/**
 * print_alphabet - prints all letters of the alphabet in lowercase
 *
 * Return: Always 0 (succes)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
