// (Largest and Smallest Integers) 程式
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	int largest_num; // 儲存 最大的 整數
	int smallest_num;// 儲存 最小的 整數

	printf("請輸入 第一個 整數: ");
	scanf("%d", &num1);

	printf("請輸入 第二個 整數: ");
	scanf("%d", &num2);

	printf("請輸入 第三個 整數: ");
	scanf("%d", &num3);

	// 判斷 num1 > num2 > num3 的情況
	if ((num1 > num2) && (num2 > num3))
	{
		largest_num = num1;
		smallest_num = num3;
	}
	// 判斷 num1 > num3 > num2 的情況
	else if ((num1 > num3) && (num3 > num2))
	{
		largest_num = num1;
		smallest_num = num2;
	}

	// 判斷 num2 > num1 > num3 的情況
	if ((num2 > num1) && (num1 > num3))
	{
		largest_num = num2;
		smallest_num = num3;
	}
	// 判斷 num2 > num3 > num1 的情況
	else if ((num2 > num3) && (num3 > num1))
	{
		largest_num = num2;
		smallest_num = num1;
	}

	// 判斷 num3 > num1 > num2 的情況
	if ((num3 > num1) && (num1 > num2))
	{
		largest_num = num3;
		smallest_num = num2;
	}
	// 判斷 num3 > num2 > num1 的情況
	else if ((num3 > num2) && (num2 > num1))
	{
		largest_num = num3;
		smallest_num = num1;
	}

	printf("\n");

	printf("最大的整數是 %d\n", largest_num);
	printf("最小的整數是 %d\n", smallest_num);

	system("pause");
	return 0;
}