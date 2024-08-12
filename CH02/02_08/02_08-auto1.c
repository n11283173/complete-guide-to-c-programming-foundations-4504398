#include <stdio.h>

void sum(void)
{
	auto int a,b;

	a = 91; b = 7; //local to sum function (values are used in this function and discarded when funciton is done)
	printf("%d + %d = %d\n",a,b,a+b);
}

int main()
{
	puts("Calling the sum() function:");
	sum();
	puts("done");

	return(0);
}
