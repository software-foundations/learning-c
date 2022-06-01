#include <stdio.h>

int square(int);

int main(void)
{
	int x;

	for (x = 1; x <= 10 ; x ++)
	{
		printf("-> %d\n", square(x));
	}

	return 0;
}

int square(int number)
{
	return number * number;
}