#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/**
 * print Farenheit-Celsius Table for 
 * fahr = 0, 20, ..., 300; floating point version with header above table
 */
main()
{
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf ("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}
