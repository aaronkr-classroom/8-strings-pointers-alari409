//data_loss.c
#include <stdio.h>

int main(void)
{
	unsigned int x = 0x12346578;
	long lg = 2147483648; //long의 최대값
	double xl = 123456789123.456789;

	printf("\nUint: %d\n", x);
	printf("Uint -> short: %d\n", (short)x);
	printf("Uint -> char: %d\n", (char)x);

	printf("\nLong: %d\n", lg);
	printf("Long -> int: %d\n", (int)lg);
	printf("Long -> char: %d\n", (char)lg);

	printf("\nDbl: %lf\n", xl);
	printf("Dbl -> long: %d\n", (long)x);
	printf("Dbl -> short: %d\n", (short)x);

	return 0;
}