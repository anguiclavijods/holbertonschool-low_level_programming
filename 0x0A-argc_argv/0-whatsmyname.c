#include <stdio.h>
/**
 *main - function start
 *@argc: variable type int
 *@argv: pointer of array
 *Return: None.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
