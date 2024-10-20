// (Sales Commission Calculator) 程式
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float gross_sales;    // 上周銷售商品的總額
	float earnings_total; // 上週總共獲得的薪水

	while (1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &gross_sales); //輸入上周售賣商品的總額
		
		if (gross_sales == -1) // 銷售總額輸入為-1時，退出計算程式
			break;

		/*
			計算總共獲得的薪水:
			總薪水 = (銷售總額 * 9%) + 200元
		*/
		earnings_total = (gross_sales * 0.09) + 200;
		
		printf("Salary is: $%.2f\n", earnings_total); //顯示總共獲得的薪水

		printf("\n");
	}

	system("pause");
	return 0;
}