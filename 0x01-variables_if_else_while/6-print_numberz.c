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
	int a;
	for (a = 0; a < 10 ; a++)
	putchar('0' + a);
	putchar('\n');
	return (0);
}
