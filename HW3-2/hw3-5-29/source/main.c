// (Least Common Multiple) 祘Α
#include <stdio.h>
#include <stdlib.h>

int lcm(int, int);

int main(void)
{
	int number1;
	int number2;
	int lcm_number;

	printf("Enter first number: ");
	scanf("%d", &number1);

	printf("Enter second number: ");
	scanf("%d", &number2);

	lcm_number = lcm(number1, number2);

	printf("Least common multiple number is %d\n", lcm_number);

	system("pause");
	return 0;
}

int lcm(int a, int b)
{
	int max;
	int min;
	int i = 1;

	// 耞 a 籔 b 计だ纗 max 籔 min 跑计
	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
		
	while ((max * i) % min != 0) // 讽 max * i 计砆 min 计俱埃程そ计 (i眖1秨﹍)
		i++;
	
	return max * i;
}