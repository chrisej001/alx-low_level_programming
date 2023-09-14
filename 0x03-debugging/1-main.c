#include <stdio.h>

/**
 * main - causes a potential infinite loop
 * Return: 0
 */

int main(void)
{
int i;

printf("Potential infinite loop incoming :(\n");

i = 0;

/* 
 * 
 while (i < 10)
 {
 putchar(i);
 }
 */
    
printf("Potential infinite loop avoided! \\o/\n");

return (0);
}
