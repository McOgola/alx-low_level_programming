#include "main.h"
#include <unist.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the chcracter to print
 * return: on success 1
 * on error, -1, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1);
}
