#include "main.h"
/*
 * _strlen - returns the length of a string
 * @s: string
 * return: length
 * */
int _strlen(char *s)
{
	int s_len = 0;

	while(*s != '\0')
	{
		s_len++;
		s++;
	}
	return s_len;
}
