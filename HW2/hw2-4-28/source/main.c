// (Calculating Weekly Pay) 程式
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int employee_code; // 員工代碼

	// Managers 薪水計算變數
	double weekly_salary;  // 週薪
	double weeks_worked;   // 這個月所工作的週數

	// Hourly Workers 薪水計算變數
	double hourly_salary;   // 時薪
	double hours_worked;    // 這星期所工作的小時數
	double overtime_salary; // 加班費

	// Commission Workers 薪水計算變數
	double gross_sales; // 售賣商品的總額

	// Pieceworkers 薪水計算變數
	double item_amount; // 售賣商品的總數量
	double item_profit; // 單件商品的利潤

	double total_salary; // 總共薪水

	printf("Each employees code is shown below:\n");
	printf("(1) Managers (2) Hourly Workers (3) Commission Workers (4) Pieceworkers\n");
	printf("\n");

	while (1)
	{
		printf("Enter your employee code (-1 to end): ");
		scanf("%d", &employee_code);

		if (employee_code == -1)
			break;

		switch (employee_code) // 切換不同員工薪水計算方式
		{
			case 1:
				printf("Enter your worked weeks for the month: ");
				scanf("%lf", &weeks_worked);
				printf("Enter your weekly salary: ");
				scanf("%lf", &weekly_salary);

				total_salary = weeks_worked * weekly_salary;

				printf("Your salary is %.2lf\n", total_salary);
				break;

			case 2:
				printf("Enter your worked hours for this week: ");
				scanf("%lf", &hours_worked);
				printf("Enter your hourly salary: ");
				scanf("%lf", &hourly_salary);

				if (hours_worked > 40)
				{
					overtime_salary = (hours_worked - 40) * hourly_salary * 1.5;
					total_salary = 40 * hourly_salary + overtime_salary;
				}
				else
					total_salary = hours_worked * hourly_salary;

				printf("Your salary is %.2lf\n", total_salary);
				break;

			case 3:
				printf("Enter your gross sales for this week: ");
				scanf("%lf", &gross_sales);

				total_salary = (gross_sales * 0.057) + 250;

				printf("Your salary is %.2lf\n", total_salary);
				break;

			case 4:
				printf("Enter your amount of sales items for this week: ");
				scanf("%lf", &item_amount);
				printf("Enter the profit for the item: ");
				scanf("%lf", &item_profit);

				total_salary = item_amount * item_profit;

				printf("Your salary is %.2lf\n", total_salary);
				break;

			default:
				printf("This is error code, Please try again. \n");
				break;
		}
		printf("\n");
	}

	system("pause");
	return 0;
}