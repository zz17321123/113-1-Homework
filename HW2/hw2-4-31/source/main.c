// (Diamond-Printing Program) 程式
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Max = 5;
	int Min = 5;

	/*
		繪製鑽石圖案:
		
		i 為橫列(Row)    從 1~9 共 9 列
		j 為直行(Column) 從 1~9 共 9 列
		Max 為限制 * 號右邊位置 (預設為5)
		Min 為限制 * 號左邊位置 (預設為5)

		判斷當 (j >= Min) && (j <= Max)，輸出 * 號
		反之，輸出 空格 號

		判斷當 i < 5， Max++ 且 Min--，(Max 從5~9，Min 從 5~1)
		反之， Max-- 且 Min++，(Max 從9~5，Min 從 1~5)
	*/

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if ((j >= Min) && (j <= Max))
				printf("*");
			else
				printf(" ");
		}

		if (i < 5)
		{
			Max++; Min--;
		}
		else
		{
			Max--;Min++;
		}

		printf("\n");
	}

	system("pause");
	return 0;
}