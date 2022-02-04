#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
	char a;
	for (a = 'a'; a <= 'z' ; a++)
	    {
	     if (a == 'q' || a == 'e'){
		continue;
	    }
		putchar(a);
	    }
		putchar('\n');
	return (0);
}
