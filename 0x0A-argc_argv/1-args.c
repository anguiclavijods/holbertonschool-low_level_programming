#include <stdio.h>
/**
 *main - function
 *@argc: size of array
 *@argv:arguments
 *Return: None.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", --argc);
	return (0);
}
