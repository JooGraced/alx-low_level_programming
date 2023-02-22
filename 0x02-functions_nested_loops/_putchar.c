#include "main.h" 
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c : It is the character to print
 *
 * Return: On success 1.
 * On error: -1 returned, and error is set approproately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
