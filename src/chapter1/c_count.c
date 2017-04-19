#include <stdio.h>
#include "../main.h"

void c_count()
{
	print_fn;
	int c, nc;

	nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			printf("%d\n", nc - 1);
			nc = 0;
		}
	}
}

void c_count2()
{
	print_fn;

	double nc;

	for (nc = 0; getchar() != EOF; ++nc) {
		;
	}
	printf("%.0f\n", nc);
}
