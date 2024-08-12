#include <stdio.h>
#include <stdlib.h>

int main()
{
	// declare constant ratio equal to 3/4
	const float ratio = 0.75;
	// declare char a
	char a;
	// declare integer b
	int b;
	// declare float c
	float c;

	// assign char
	a = 'a';
	// assign integer
	b = 2;
	// assign float
	c = 0.3;

	// output char value, e.g., "the value of variable a is '?'"
	printf("the value of variable a is %c\n", a);
	// output integer value, e.g., "the value of variable b is ??"
	printf("the value of variable b is %d\n", b);
	// output float value, e.g., "the value of variable c is ???.??"
	printf("the value of variable c is %0.1f\n", c);
	// output value of ratio, e.g., "the value of constant ratio is ???.??"
	printf("the value of constant ratio is %0.2f\n", ratio);

	return 0;
}
