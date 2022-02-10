#include "main.h"
#include <stdio.h>

/**
* more_numbers to print from 0 to 14 with a new line.
* @c: Variable text
* Return: Always 0.
*/

void more_numbers(void)
{
char c;
for (c = '0'; c <= '14'; c++)
_putchar(c);
_putchar('\n');
}
