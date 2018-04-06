#include <stdio.h>

int main(void)
{
	float x, y;
	char oper;

	scanf_s("%f %c", &y, &oper);
	if (oper == 's')
	{
		printf("= %f\n", y);
		while (oper != 'e')
		{
			scanf_s("%f %c", &x, &oper);
			switch (oper)
			{
			case '+':
				printf("= %.1f\n", y += x);
				break;
			case '-':
				printf("= %.1f\n", y -= x);
				break;
			case '*':
				printf("= %.1f\n", y *= x);
				break;
			case '/':
				if (x == 0)
					printf("Ошибка\n");
				else
					printf("= %.1f\n", y /= x);
				break;
			default:
				if (oper != 'E' && oper != 'S')
					printf("Ошибка оператора\n");
			}
		}
	}
	else if (oper != 'S' && oper !='E')
	{
		printf("Задайте значение переменной\n");
	}

	return 0;
}