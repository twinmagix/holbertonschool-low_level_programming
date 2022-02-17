#include "main.h"
#include <stdio>

/**
 * _strcmp - a function that compares two strings.
 * @c:
 */

int _strcmp(char *s1, char *s2)
{
  int i = 0, cmp = 0;

  while (s1[i] != '\0' && s2[i] != '\0' && cmp == 0)
  {
  cmp = s1[i] - s2[i];
  i++;
  }
return (cmp);
}
