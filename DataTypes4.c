#include <stdio.h>

int main()
{
	float F = 27.0;
	float C = (F - 32) / 1.8;

	printf("Градусов Фаренгейта: %f\nГрадусов Цельсия: %f", F, C);
	return 0;
}