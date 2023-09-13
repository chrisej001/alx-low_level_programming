#include <stdio.h>

/**
* main - Prints the sum of the even-valued terms, followed by a new line.
* Return: Always 0.
*/

int main(void)
{
long fib1 = 1;
long fib2 = 2;
long sum = 0;

while (fib2 <= 4000000)
{
if (fib2 % 2 == 0)
{
sum += fib2;
}

long next_term = fib1 + fib2;
fib1 = fib2;
fib2 = next_term;
}

printf("%ld\n", sum);

return (0);
}
