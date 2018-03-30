#include <stdio.h> 

int main(void)
{
	int c = 1;
	float x, y = .0;
	char oper;

	printf("Введите выражение\n\n");
	scanf_s("%f %c", &x, &oper);
	while (c == 0);
	{
		switch (oper)
		{
		case 'E':
			return 0;
			break;

		case 'S':
			y = x;
			printf("= %f\n", y);
			break;

		case '+':
			y += x;
			break;

		case '-':
			y -= x;
			printf("= %f\n", y);
			break;

		case '*':
			y *= x;
			printf("= %f\n", y);
			break;

		case '/':
			if (x == .0)
				printf("Деление на ноль!\n");
			else
				y /= x;
			printf("= %f\n", y);
			break;

		default:
			printf("Неизвестный оператор\n");
			break;
		}
	}

}