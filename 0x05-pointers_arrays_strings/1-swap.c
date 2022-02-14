#include "main.h"
#include <stdio>

/**
 * swap_int -  swaps the values of two integers.
 * @c: input number.
 */

void swap_int(int *a, int *b)
{
   int c;

   c = *a;
   *a = *b;
   *b = c;
}
