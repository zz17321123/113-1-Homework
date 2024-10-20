// (Salary Calculator) 程式
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hours_worked;    // 工作時間
	float hourly_rate;   // 時薪
	float excess_salary; // 加班費
	float total_salary;  // 總薪水

	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hours_worked);

		if (hours_worked == -1) // 輸入工作時間為-1時，退出計算程式
			break;

		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &hourly_rate);

		/*
			總薪水計算:
			判斷工作時間是否超過40小時，如果超過40小時:

			(從題目可得知，當工作時間超過40小時，此後每額外1小時工作時間，將要支付1.5小時的薪水)
			加班費 = (工作時間 - 40) * 時薪 * 1.5倍
			總薪水 = 40小時 * 時薪 + 加班費

			反之工作時間沒有超過40小時:

			總薪水 = 工作時間 * 時薪
		*/
		if (hours_worked > 40)
		{
			excess_salary = (hours_worked - 40) * hourly_rate * 1.5; 
			total_salary = 40 * hourly_rate + excess_salary; 
		}
		else
			total_salary = hours_worked * hourly_rate;
		
		printf("Salary is $%.2f\n", total_salary);

		printf("\n");
	}

	system("pause");
	return 0;
}