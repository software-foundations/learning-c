#include <stdio.h>
#include <stdlib.h>

// Prototype
int module(int dividend, int divisor);

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= 5; i++)
	{
		printf("i %d -> %d\n", i, rand());
	}	

	for (j = 1; j <= 20; j ++)
	{
		int random = rand();

		int module = random % 6;

		printf("j %d -> %d -> %d\n", j, random, module);
	}

	for (k = 1; k <= 20; k ++)
	{
		int random = rand();

		int module = random % 6;

		printf("%d ", module);

		if ( module == 0 )
		{
			printf("\n");
		}
	}

	return 0;

}