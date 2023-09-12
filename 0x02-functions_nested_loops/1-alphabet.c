#include "main.h"

/**
  *print_alphabet - Prints the lowercase alphabet followed by a newline.
  *Description: This function prints all lowercase letters from 'a' to 'z'
  *              followed by a newline character ('\n').
  */

void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
}
