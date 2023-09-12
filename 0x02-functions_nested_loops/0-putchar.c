#include <unistd.h>
#include <stdio.h>

/**
 **main - print putchar
 * Return: 0
 */

int main(void)
{
char text[] = "_putchar\n";
int i = 0;
while (text[i] != '\0')
{
putchar(text[i]);
i++;
}
return (0);
}
