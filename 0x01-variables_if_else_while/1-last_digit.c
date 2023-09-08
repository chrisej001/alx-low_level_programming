#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main point
 *
 * Return: Always 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int lastDigit = n % 10;

if (lastDigit > 5)
{
printf("if lastDigit > 5: the string > 5");
}
else if (lastDigit == 0)
{
printf("if lastDigit = 0: the string =  0");
}
else
{
printf("if lastDigit < 6 and not 0: the string and < 6 and not 0");
}

printf("\n");

return (0);
}
