// (Fibonacci) 祘Α
#include <stdio.h>
#include <stdlib.h>

int fibonacci(int);

int main(void)
{
	int input_n;
	int fibonacci_number;

	printf("Enter number n: ");
	scanf("%d", &input_n);

	fibonacci_number = fibonacci(input_n);

	printf("Fibonacci number is %d\n", fibonacci_number);

	system("pause");
	return 0;
}

/*
	fibonacci(int n)
	fibonacci 计ㄤい–计常琌玡ㄢ计㎝ (讽 n > 1)

	fibonacci(0) = 0
	fibonacci(1) = 1
	fibonacci(n) = fibonacci(n-1) + fibonacci(n-2) (讽 n > 1)

	ex. 讽 fibonacci(4) :
	1. fibonacci(4)
	2. fibonacci(3) + fibonacci(2)
	3. fibonacci(2) + fibonacci(1) + fibonacci(1) + fibonacci(0)
	4. fibonacci(1) + fibonacci(0) + fibonacci(1) + fibonacci(1) + fibonacci(0)
	5. 1 + 0 + 1 + 1 + 0 = 3
*/
int fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}