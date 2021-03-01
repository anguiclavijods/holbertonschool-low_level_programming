#include <stdio.h>
#include <stdlib.h>
/**
 * main - main funtion that print of addition of numbers
 * @argc: integer
 * @argv: string
 * Return: addition or error
 */
int main(int argc, char *argv[])
{
int i = 1, result = 0,  content= 0;
char *consta;
if (argc == 1)
        {
        printf("0\n");
        return (0);
        }
do {
        consta = argv[i];
        if (*consta  == 48)
                {
                result += 0;
                }
        else
                {
                content = atoi(argv[i]);
                        if (content == 0)
                                {
                                printf("Error\n");
                                return (1);
                                }
                        else
                                result += content;
                }
        i++;
} while (i < argc);
printf("%d\n", result);
return (0);
}


/*	int result, i = 1;

	if (argc > 0 )
	{
		while (argv[i] != '\0')
		result = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);*/
