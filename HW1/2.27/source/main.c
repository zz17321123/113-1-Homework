// (Pyramid Pattern of Asterisks) 程式
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 1; i <= 9; i++) 
	{
		printf("\t"); // 將每一行前面 Tab 移出空間

		if (i % 2 != 0) // 當 i 為奇數時，如 1、3、5、7、9 執行下列程式 (單行星號的數量)
		{
			for (int j = 0; j < (9 - i) / 2; j++) // 計算星號前面，所需填充空白數量
				printf(" "); // 打印空白

			for (int k = 1; k <= i; k++) //計算打印多少數量的星號
				printf("*"); // 打印星號
		}
		else
			printf("\n"); // 換到下一行
	}

	printf("\n");

	system("pause");
	return 0;
}