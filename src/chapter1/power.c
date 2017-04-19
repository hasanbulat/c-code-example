#include <stdio.h>
#include "../main.h"

int power_fn(int, int);

int power()
{
	print_fn;
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d\t%d\t%d\n", i, power_fn(2,i), power_fn(-3,i));
	}
	return 0;
}

int power_fn(int base, int n)
{
	int i, p;

	p = 1;
	for (i = 0; i < n; i++) {
		p = p * base;
	}
	return p;
}
