#include <stdio.h>

int bin_to_dec(char *pbin);
char *do_binary(int n, char *wsk);
void binary(const char * lan);

int main(int argc, const char * argv[]) {

	char first[8];
	char first_neg[8];
	char second[8];
	char second_neg[8];
	char abc[8];
	int first_dec;
	int second_dec;
	int and;
	int or;
	int _or;

	printf("введите двоичную строку\n");
	scanf("%s", first);
	printf("введите вторую двоичную строку\n");
	scanf("%s", second);

	first_dec = bin_to_dec(first);
	second_dec = bin_to_dec(second);

	printf("Первое число %d\n", first_dec);
	do_binary(~first_dec, first_neg);
	printf("~%d = ", first_dec);
	binary(first_neg);
	printf("второе чилсо %d\n", bin_to_dec(second));
	do_binary(~second_dec, second_neg);
	printf("~%d = ", second_dec);
	binary(second_neg);
	putchar('\n');

	and = first_dec & second_dec;

	printf("%d & %d = ", first_dec, second_dec);
	binary(do_binary(and, abc));

	or = first_dec | second_dec;

	printf("%d | %d = ", first_dec, second_dec);
	binary(do_binary(or , abc));

	_or = first_dec ^ second_dec;

	printf("%d ^ %d = ", first_dec, second_dec);
	binary(do_binary(_or, abc));

}


int bin_to_dec(char * pbin) {

	int bac = 0;
	while (*pbin != '\0')
	{
		bac = 2 * bac + (*pbin++ - '0');
	}

	return bac;
}

char * do_binary(int n, char *wsk)
{
	int i;
	static int bac = 2 * sizeof(int);
	for (i = bac - 1; i >= 0; i--, n >>= 1) {
		wsk[i] = (01 & n) + '0';
	}
	wsk[bac] = '\0';
	return wsk;
}

void binary(const char * lan)
{
	int i = 0;
	while (lan[i]) {
		putchar(lan[i]);
		if (++i % 4 == 0 && lan[i]) {
			putchar(' ');
		}
	}
	putchar('\n');
}