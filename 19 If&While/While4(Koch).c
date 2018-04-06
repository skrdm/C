#include <stdio.h>

int main() 
{
	for (int i = 1; i <= 10; i++)
	{
		int a = 1;
		a *= i;
		printf("Factorial %i = %i\n", i, a);
	}
	printf("\n");
	return 0;
}