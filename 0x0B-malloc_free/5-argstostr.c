#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 
 */
char *argstostr(int ac, char **av)
{
    char *chara;
    int i, j;
    
    if( ac == 0 && av == NULL)
    {
        return(NULL);
    }
    if(!chara)
    {
        return(NULL);
    }
    chara = malloc(sizeof(char)*ac);
    {
        if (chara == NULL)
        {
            return(NULL);
        }
    }
    for ( i = 0; i < ac; i++)
    {
        for ( j = 0; av[i][j] !='\0'; j++)
        {
        }
        chara[i] = malloc(sizeof(char) * (j + 1));
        
    }
    return (chara);
 
}