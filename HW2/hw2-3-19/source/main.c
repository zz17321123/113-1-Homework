// (Interest Calculator) 程式
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float loan_principal; // 當前貸款本金
	float interest_rate;  // 貸款年利率
	int loan_days;        // 貸款天數
	float interest_total; // 貸款日利息

	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &loan_principal);
		
		if (loan_principal == -1) // 貸款本金輸入為-1時，退出計算程式
			break;

		printf("Enter interest rate: ");
		scanf("%f", &interest_rate);
		printf("Enter term of the loan in days: ");
		scanf("%d", &loan_days);

		/*
			日利息計算:
			日利息 = 當前貸款本金 * 年利率 * 天數 / 365天
		*/
		interest_total = loan_principal * interest_rate * loan_days / 365;

		printf("The interest charge is $%.2f\n", interest_total); // 輸出當前日利息
		
		printf("\n");
	}

	system("pause");
	return 0;
}