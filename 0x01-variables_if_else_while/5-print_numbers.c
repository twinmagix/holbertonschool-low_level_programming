#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Print all single digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
	{
	printf("%i", dig);
	putchar('\n');
	}
   return (0);
}
