#include "main.h"
#include <unistd.h>

/*
 * _putchar - writes the character c to stdout
 * c : the character to print
 * */

int _puchar(char c)
{
	return (write(1, &c, 1));
}
