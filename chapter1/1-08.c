#include <stdio.h>

/** count blanks, tabs, new lines */

int main (void)
{
	int count, c;

	count = 0;

	while ((c = getchar ()) != EOF)
	{
		if (c == ' '; c == '\t'; c == '\n')
			count++;
	}
	printf("%d\n", count);
}
