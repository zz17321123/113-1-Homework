// (Modified Compound-Interest Program) 程式
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float principal = 5000;   // 本金
	float current_rate = 0.1; // 當前利率
	float amount = 0;         // 總金額

	printf("%s%21s\n", "Year", "Amount on deposit");

	for (int year = 1; year <= 15; year++)
	{
		amount = principal * (1 + current_rate); // 計算當年總金額

		current_rate += 0.005; // 每年增加0.5%利率
		principal = amount; // 將當年總金額傳值給本金，作為下一年的本金使用
		
		printf("%4d%21.2f\n", year, amount); //輸出1~15年和每年的總金額
	}

	system("pause");
	return 0;
}