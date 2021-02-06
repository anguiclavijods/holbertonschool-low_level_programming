#include <stdio.h>
/**
 * main - Print the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char a;

  for (a = 'A'; a <= 'Z' ; a++)
    putchar(a);
  putchar('\n');
  return (0);
}
