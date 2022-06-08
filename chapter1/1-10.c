#include <stdio.h>

/* copy its input to output replacing each tab by \t
 * each backspace by \b and each backslash by \\
 */

int main void
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		else if (c == '\b')
		{
			putchar('\\');
			putchar('b');
		}
		else if (c == '\\')
		{
			putchar('\\');
			putchar('\\');
		}
	else
	{
		putchar(c);
	}
	}
}
