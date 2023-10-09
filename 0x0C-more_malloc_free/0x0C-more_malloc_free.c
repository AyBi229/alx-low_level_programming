#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
void _memset (void *s, int b, unsigned int n)
{
    char *ptrchar = s;
    int i ;

    for (i = 0 ; i<n/sizeof (int) ; i++)
    {
        ptrchar[i] = b;
    }
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc (unsigned int nmemb, unsigned int size)
{
    void *ptr = malloc (size * nmemb);

    if (nmemb == 0 || ptr == NULL)
        return (NULL);

    _memset (ptr, 0, size*nmemb);

    return (ptr);
}
