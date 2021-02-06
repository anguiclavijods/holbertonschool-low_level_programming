 
#include <stdio.h>
#include <unistd.h>
/**
 * main - write to Standard output
 *
 * Return: 1 (Success)
 */
int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
