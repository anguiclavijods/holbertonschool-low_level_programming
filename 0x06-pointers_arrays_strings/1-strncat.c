#include "holberton.h"
/**
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
 {
	 int i = 0;
	 int j;
	 for (; dest[i] != '\0'; i++)
	 {
		 
	 }
	 for (j = 0; j < n; j++)
	 {
		 dest[i] = src[j];
		 i++;
	 }
	 dest = '\0';
	 return (dest);
 }
