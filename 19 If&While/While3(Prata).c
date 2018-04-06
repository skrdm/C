#include <stdio.h>

int main()
{
	float ave_value_even, ave_value_odd;
	float count_even = .0;
	float count_odd = .0;
	float value_even = .0;
	float value_odd = .0;
	int x;

	while (scanf_s("%i ", &x) != 0)
	{
		if (x % 2 == 0 && x != 0)
		{
			count_even++;
			value_even += x;
		}
		else if (x % 2 == 1)
		{
			count_odd++;
			value_odd += x;
		}
		else break;
		ave_value_even = value_even / count_even;
		ave_value_odd = value_odd / count_odd;
	}
	printf("Кол-во четных %f\n", count_even);
	printf("Кол-во нечетных %f\n", count_odd);
	printf("Среднее значение четных %f\n", ave_value_even);
	printf("Среднее значение нечетных %f\n", ave_value_odd);
}