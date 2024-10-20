// (Hollow Rectangle of Plus Symbols) 程式
#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 0; i < 3; i++) // 橫列(Row)
	{
		for (int j = 0; j < 12; j++) // 直行(Column)
		{
			if ((i == 0) || (i == 2)) // 判斷是否為 第0列 或 第2列 時，填滿 + 號
				printf("+");
			else // 反之 第1列 時
			{
				if ((j == 0) || (j == 11)) // 判斷是否為 第0行 或 第11行，填充 + 號，其餘行填出 空格 號
					printf("+");
				else
					printf(" ");
			}
		}
		printf("\n"); // 換至下一列
	}

	system("pause");
	return 0;
}