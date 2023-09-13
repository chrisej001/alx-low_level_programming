#include <stdio.h>

/**
* main - Prints  prints the first 98 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
*
* Return: Always 0.
*/

int main(void)
{
long num1 = 1L;
long num2 = 2L;
long next_num;

long i = 3;
printf("%ld, %ld", num1, num2);

for (; i <= 98; i++)
{
next_num = num1 + num2;

printf(", %ld", next_num);

num1 = num2;
num2 = next_num;
}

printf("\n");

return (0);
}
