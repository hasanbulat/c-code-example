#include <stdio.h>
#include "../main.h"

void c2f()
{
	print_fn;
	/* convert celsius to fahrenheit */
	float fahr, cels;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	while (cels <= upper){
		fahr = ((9.0/5.0)*cels) + 32;
		printf("%3.0f\t%6.1f\n", cels, fahr);
		cels = cels + step;
	}
}
