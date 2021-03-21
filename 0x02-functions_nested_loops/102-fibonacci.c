/*Fibonacci Series using Dynamic Programming*/
#include <stdio.h>
/**
 * fib - name of function
 * @n: parameters.
 * Return: none.
*/
int fib(int n)
{
	int n1, n2, i;

	if (fib <= 0)
		print("Please enter a positive integer")
	else if (fib == 1)
		print("Fibonacci sequence upto", fib, ":")
		print(n1)
	else
		print("Fibonacci squence:")
			while (i < fib)
			{
				print(n1);
				nth = n1 + n2;
				n1 = n2;
				n2 = nth;
				i += 1;
			}
	return (0);
}
/**
 *main - function main
 *Return: (none)
*/
int main(void)
{
	int n = 9;

	printf("%d", fib(n));
	getchar();
	return (0);
}
