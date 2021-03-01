#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main funtion that print of addition of numbers
 * @argc: integer
 * @argv: string
 * Return: addition or error
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			result = result + atoi(argv[i]);
		}
	}
	else
	{
		printf("0\n");
		return (0);
	}
	printf("%i\n", result);
	return (0);
}
