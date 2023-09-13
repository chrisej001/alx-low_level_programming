#include <stdio.h>

/**
* main - Prints the sum of the even-valued terms, followed by a new line.
* Return: Always 0.
*/
int main(void)
{
long fib1 = 1;
long fib2 = 2;

printf("%ld\n", fib1);

int i;
for (i = 1; i < 10; i++)
{
long next_term = fib1 + fib2;
printf("%ld\n", next_term);
fib1 = fib2;
fib2 = next_term;
}
return (0);
}
