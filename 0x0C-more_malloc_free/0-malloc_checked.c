#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * 
 * 
 */
void *malloc_checked(unsigned int b)
{
    int* c;
    int i = 0;

    
    c = (int*) malloc (i * sizeof(int)+1);

    if (c == NULL)
    {
        exit('\0');
    }
    return (c);
    
}
