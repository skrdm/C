#include <stdio.h>
#define N 150

void main() 
{	
	int P[N];
	for (int i = 0; i < N; i++)
		P[i] = i;
	for (int s = 2; s < N; s++) 
	{
		for (int j = s * 2; j < N; j += s) 
			P[j] = 0;
	}
	for (int i = 0; i < N; i++) 
	{
		if (P[i] != 0) 
		{
			printf("%d\n", P[i]);
		}
	}
}