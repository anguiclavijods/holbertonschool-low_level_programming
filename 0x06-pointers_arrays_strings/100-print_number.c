#include "holberton.h"
#include <stdio.h>
/**
 * 
 * 
 */
void print_number(int n)
{
    int i = 0;
    int copy = n;

    for (; copy != 0; i++)
        print_number (copy);
}
