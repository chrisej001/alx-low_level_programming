#include <stdio.h>

/**
* main - Prints  prints the first 98 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
*
* Return: Always 0.
*/

int main(void)
{
int num1 = 1;
int num2 = 2;
int next_num;

printf("%d, %d", num1, num2);

for (int i = 3; i <= 98; i++)
{
next_num = num1 + num2;

printf(", ");

printf("%d", next_num);

num1 = num2;
num2 = next_num;
}

printf("\n");

return (0);
}
