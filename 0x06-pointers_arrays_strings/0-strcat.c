#include "main.h"
#include <stdio>

/**
 * *_strcat - a function that concatenates two strings.
 * @c:
 */

char *_strcat(char *dest, char *src)
{

	int x = 0, dl = 0;

	while (dest[x++])
		dl++;

	for (index = 0; src[x]; x++)
		dest[dl++] = src[x];

	return (dest);
}