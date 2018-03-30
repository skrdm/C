#include <stdio.h>

int main()
{
	for (int i = 5; i <= 50; i += 5)
	{
		int tr = (i * (i + 1)) / 2;
		printf("Triangular number %i - %i\n", i, tr);
	}
	printf("\n");
	return 0;
}