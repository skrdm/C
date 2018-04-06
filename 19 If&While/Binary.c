#include <stdio.h> 

void bin(int);

int main(void) 
{
	int x; 

	printf("Введите десятиричное число\n");
	scanf_s("%i", &x);

	printf("Двоичное число\n");
	bin(x);
	printf("\n");

	return 0;
}

void bin(int a) 
{  
	int b;

	b = a % 2;
	if (a >= 2)
		bin(a / 2);

	putchar(b == 0 ? '0' : '1');
}