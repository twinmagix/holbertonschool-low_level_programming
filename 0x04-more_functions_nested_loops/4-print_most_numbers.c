#include "main.h"
#include <stdio.h>

/**
* print_most_numbers to print from 0 to 9 mwith a new line.
* @c: Variable text
* Return: Always 0.
*/

void print_most_numbers(void)
{
 char c;
 for (c = '0'; c <= '9'; c++)
 {
  if (c != '2' && c != '4')
  {
  _putchar(c);
  } 
 _putchar('\n'); 
 }
}
