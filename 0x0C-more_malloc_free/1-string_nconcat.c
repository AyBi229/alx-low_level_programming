#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *ptr = (char*)malloc(sizeof(*s1) + n + 1);

    if (ptr == NULL)
        exit (98);
    
    int i = 0;
    int j = 0;

    while (s1[j] != '\0')
    {
        ptr[i] = s1[j];
        i++;
        j++;
    }
    
    for (j = 0 ; j < n ; j++)
    {
        ptr[i] = s2[j];
        i++;
    }
    
    ptr[i] = '\0';

    return (ptr);
}
