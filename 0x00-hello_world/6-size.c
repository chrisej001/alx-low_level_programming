#include <stdio.h>
/**                                                                                                                                                  
 * main - describing the sizeof function                                                                                                                      
 * Return: 0                                                                                                                                         
 */
int main(void)
{
    char a;
    int b;
    long int c;
    long long int d;
    float e;

    printf("Size of char: %lu bytes\n", (unsigned long)sizeof(a));
    printf("Size of int: %lu bytes\n", (unsigned long)sizeof(b));
    printf("Size of long int: %lu bytes\n", (unsigned long)sizeof(c));
    printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(d));
    printf("Size of float: %lu bytes\n", (unsigned long)sizeof(e));
    return 0;
}
