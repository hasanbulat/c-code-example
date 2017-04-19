#include <stdio.h>
#include "../main.h"

int f2c()
{
	print_fn;
	/* print fahrenheit to celsius table for farenheit 0, 20, ..., 300 */
	float fahr, cels;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		cels = 5 * (fahr-32) / 9;
		printf("%3.0f %6.1f\n", fahr, cels);
		fahr = fahr + step;
	}
	return 0;
}

