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
    int i, j, size = 0, count = 0;
    
    if( ac == 0 && av == NULL)
    {
        return(NULL);
    }
    /*chara = malloc(sizeof(chara)*ac);
    {
       
        
    }*/
    for ( i = 0; i < ac; i++)
    {
        for ( j = 0; av[i][j] !='\0'; j++)
        {
            size++;
        }
        size++;

        chara = malloc(size *sizeof(char));
         if (chara == NULL)
        {
            return(NULL);
        }
        for ( i = 0; av[i][j] !='\0'; i++)
        {
            chara[count] = av[i][j];
            count++;
        }
        chara[count] = '\n';
        count++;
    }
    chara[count]='\0';
    return(chara);
}

