#include <stdio.h>
/**
 *main - function
 *@argc: the number of command line
 *@argv: size of array
 *Return: None.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
