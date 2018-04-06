#include <stdio.h>

int main(void) 
{
	int select;
	float hours, rate, salary, salary_final, tax;

	printf("Кол-во отработанных часов\n");
	scanf_s("%f", &hours);

	printf("*********************************************************************\n");
	printf("Введите число, соответствующее желаемой тарифной ставке или действию:\n");
	printf("1)$8.75/ч                     2)$9.33/ч                              \n");
	printf("3)$10.00/ч                    4)$11.20/ч                             \n");
	printf("5)Выход                                                              \n");
	printf("*********************************************************************\n");
	scanf_s("%i", &select);

	switch (select) 
	{
		case 1:
			rate = 8.75;
			break;
		case 2:
			rate = 9.33;
			break;
		case 3:
			rate = 10.00;
			break;
		case 4:
			rate = 11.20;
			break;
		case 5:
			printf("Выход");
			return 0;
			break;
		default:
			printf("Выберите число от 1 до 5\n");
			return 0;
			break;
	}

	if (hours >= 40)
		salary = hours * rate + (hours - 40) * 1.5;
	else 
		salary = hours * rate;

	if (salary <= 300 && salary > 0)
		tax = salary * 0.15;
	else if (salary > 300 && salary <= 450)
		tax = 300 * 0.15 + (salary - 300) * 0.2;
	else
		tax = 300 * 0.15 + 150 * 0.2 + (salary - 450) * 0.05;

	salary_final = salary - tax;

	printf("Заработная плата: %f\n", salary);
	printf("Сумма налогов: %f\n", tax);
	printf("Зарплата после вычетов: %f\n", salary_final);
	return 0;
}