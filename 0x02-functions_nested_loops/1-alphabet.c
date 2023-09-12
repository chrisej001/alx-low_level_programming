#include "main.h"

/**
  *print_alphabet - Prints the lowercase alphabet followed by a newline.
  *Description: This function prints all lowercase letters from 'a' to 'z'
  *              followed by a newline character ('\n').
  */

void print_alphabet(void)
{
char  c;
for (c = 'a'; c < 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
