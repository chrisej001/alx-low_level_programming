#include <stdio.h>

/**
* main - Prints  prints the first 98 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
*
* Return: Always 0.
*/

int main(void)
{
long long int num1 = 1LL;
long long int num2 = 2LL;
long long int next_num;
int i = 3;
printf("%lld, %lld", num1, num2);

for (; i <= 98; i++)
{
next_num = num1 + num2;

printf("%lld", next_num);

num1 = num2;
num2 = next_num;
}

printf("\n");

return (0);
}
