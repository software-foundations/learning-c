#include <stdio.h>

// Function prototype
int maximum(int, int, int);

int main(void)
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	printf("Greather: %d\n", maximum(a, b, c));

	return 0;
}

// Function definition
int maximum(int x, int y, int z)
{
	int max = x;

	if (y > max)
		max = y;

	if (z > max)
		max = z;

	return z;
}