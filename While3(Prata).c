#include <stdio.h>

void main() 
{
	float ave_even, ave_value_odd;
	int x;
	float count_even = .0;
	float count_odd = .0;
	float value_odd = .0;
	while (scanf_s("%i ", &x) != 0)
	{
		if (x % 2 == 0)
			count_even++;
		else
		{
			count_odd++;
			value_odd += x;
		}
		ave_even = count_even / (count_even + count_odd);
		ave_value_odd = value_odd / count_odd;
	}
	printf("Кол-во четных %f\n", count_even);
	printf("Кол-во нечетных %f\n", count_odd);
	printf("Среднее кол-во четных %f\n", ave_even);
	printf("Среднее значение нечетных %f\n", ave_value_odd);
}