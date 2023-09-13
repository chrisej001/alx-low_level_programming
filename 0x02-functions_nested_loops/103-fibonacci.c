#include <stdio.h>

/**
* main - Prints the sum of the even-valued terms, followed by a new line.
* Return: Always 0.
*/

int main(void)
{
long fib1 = 0;
long fib2 = 1;

printf("%ld\n", fib1);

int i = 1;
for (; i < 10; i++)
{
long next_term = fib1 + fib2;
printf("%ld\n", next_term)
fib1 = fib2;
fib2 = next_term;
}


return (0);
}
