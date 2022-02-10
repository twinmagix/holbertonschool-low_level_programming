#include "main.h"
#include <stdio.h>

/**
* print_numbers - print a digit 0 to 9 with a new line
* @c: Variable text
* Return: Always 0.
*/

void print_numbers(void)
{
 char c;
 for (c = '0'; c <= '9'; c++)
 {
 _putchar(c);
 }
 _putchar('\n');
}
