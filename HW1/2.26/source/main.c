// (Multiples) 程式
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int multiple_num;
	int base_num;

	printf("請輸入 第一個 整數: ");
	scanf("%d", &multiple_num);

	printf("請輸入 第二個 整數: ");
	scanf("%d", &base_num);

	printf("\n");

	if (base_num != 0) // 判斷 第二個 整數是否等於 0
	{
		if (multiple_num % base_num == 0) // 判斷 multiple_num 是否可以被 base_num 整除
		{
			printf("%d 是 %d 的倍數\n", multiple_num, base_num);
		}
		else
		{
			printf("%d 不是 %d 的倍數\n", multiple_num, base_num);
		}
	}
	else
		printf("第二個 整數輸入不能為 0\n");

	system("pause");
	return 0;
}