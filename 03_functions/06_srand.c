#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int generate_20_random_numbers(void);

int main(void)
{
	unsigned int seed;

	unsigned int timestamp;

	printf("### seed: ");

	scanf("%u", &seed);

	generate_20_random_numbers();

	srand(seed);

	timestamp = time(NULL);

	srand(timestamp);

	printf("### Timestamp: %u\n", timestamp);

	generate_20_random_numbers();

	return 0;
}

int generate_20_random_numbers(void)
{
	int i;

	for (i = 1; i <= 20; i ++)
	{
		int random = rand();

		printf("%d -> %d\n", i, random);

	}
}