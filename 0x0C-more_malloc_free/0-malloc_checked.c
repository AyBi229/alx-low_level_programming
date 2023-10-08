#include <stdlib.h>
#include "main.h"

void *malloc_checked (unsigned int b)
{
    int *bmalloc = malloc(b);
    
    if (bmalloc == NULL)
        exit (98);
    return (bmalloc);
}
