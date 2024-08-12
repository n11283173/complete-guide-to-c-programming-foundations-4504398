#include <stdio.h>

int main()
{
	/* variable declarations */
	int a;
	float b;
	int c;

	/* variable assignments */
	a = 15;
	b = (float)a / 2;
	c = b * 4;

	/* output */
	printf("Value of variable A = %d\n", a);
	printf("Value of variable B = %0.1f\n", b);
	printf("value of variable C = %d\n", c);

	return (0);
}
