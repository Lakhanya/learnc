#include <stdio.h>

/* copy input to output, replacing each string of one or more blanks by 
   a single blank */

int main (void)
{
	int c;

	while (( c = getchar ()) != EOF)
	{
		if (c == ' ')
		{
			while (( c = getchar ()) == ' ')
				putchar (' ');
			{
		if (c == EOF)
		{
			break
		}
			}
		}
	}
}
