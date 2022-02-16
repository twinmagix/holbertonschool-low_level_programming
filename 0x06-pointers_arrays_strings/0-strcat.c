#include "main.h"
#include <stdio>

/**
 * *_strcat - a function that concatenates two strings.
 * @c:
 */

char *_strcat(char *dest, char *src)
{

    int i, j;
 
    // move to the end of the destination string
    for (i = 0; dest[i] != '\0'; i++);
 
    // `i` now point to terminating null character in the destination
 
    // Appends characters of the source to the destination string
    for (j = 0; source[j] != '\0'; j++) {
        dest[i + j] = source[j];
    }

    dest[i + j] = '\0';
 
    return dest;

}
