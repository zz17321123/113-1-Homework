// (Fibonacci) 祘Α
#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int);

int main(void)
{
	unsigned int input_n;
	unsigned long long int fibonacci_number;

	printf("Enter number n: ");
	scanf("%u", &input_n);

	fibonacci_number = fibonacci(input_n);

	printf("Fibonacci number is %llu\n", fibonacci_number);

	system("pause");
	return 0;
}

/*
	fibonacci(unsigned int n)
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
unsigned long long int fibonacci(unsigned int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	
	unsigned long long int a = 0; // fibonacci(0)
	unsigned long long int b = 1; // fibonacci(1)
	unsigned long long int fib = 0;

	for (unsigned int i = 2; i <= n; i++)
	{
		fib = a + b; // 璸衡讽玡 i 计 fibonacci 计
		a = b;       // 穝 a  fibonacci(i - 1)
		b = fib;     // 穝 b  fibonacci(i)
	}

	return b;
}