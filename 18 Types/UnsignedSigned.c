﻿#include <stdio.h>
#include <limits.h>
 
int main() 
{
	printf("Signed char: %d %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("Unsigned char: %d %d\n", 0, UCHAR_MAX);
	printf("Signed short: %d %d\n", SHRT_MIN, SHRT_MAX);
	printf("Unsigned short: %d %d\n", 0, USHRT_MAX);
	printf("Signed int: %d %d\n", INT_MIN, INT_MAX);
	printf("Unsigned int: %d %u\n", 0, UINT_MAX);
	printf("Signed long: %ld %ld\n", LONG_MIN, LONG_MAX);
	printf("Unsigned long: %d %lu\n", 0, ULONG_MAX);
	return 0;
}