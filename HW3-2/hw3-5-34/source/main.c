// (Recursive Exponentiation) �{��
#include <stdio.h>
#include <stdlib.h>

int power(int, int);

int main(void)
{
	int input_base;
	int input_exponent;
	int exponent_number;

	printf("Enter base number: ");
	scanf("%d", &input_base);

	printf("Enter exponent number (greater than or equal to 1): ");
	scanf("%d", &input_exponent);

	exponent_number = power(input_base, input_exponent);

	printf("Exponent number is %d\n", exponent_number);

	system("pause");
	return 0;
}

/*
	power(int base, int exponent)
	�ϥΰj���覡���g�Ƶ{���A��Ƶ{����J exponent ���� 1 �ɦ^�� base * power(base, exponent - 1)�A����Ƶ{����J exponent �� 1 �ɦ^�� base�C

	ex. �� power(4, 3) ��:
	1. power(4, 3)
	2. 4 * power(4, 2)
	3. 4 * 4 * power(4, 1)
	4. 4 * 4 * 4 = 64
*/
int power(int base, int exponent)
{
	if (exponent == 1)
		return base;
	else
		return base * power(base, exponent - 1);
}