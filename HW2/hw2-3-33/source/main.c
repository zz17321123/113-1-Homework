// (Hollow Rectangle of Plus Symbols) 程式
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row;
	int column;

	printf("Enter rectangle length: ");
	scanf("%d", &row);

	printf("Enter rectangle breadth: ");
	scanf("%d", &column);


	for (int i = 0; i < row; i++) // 橫列(Row)
	{
		for (int j = 0; j < column; j++) // 直行(Column)
		{
			if ((i == 0) || (i == row-1)) // 判斷是否為 第0列 或 第row-1(最後1列)列 時，填滿 + 號
				printf("+");
			else // 反之 第1列 時
			{
				if ((j == 0) || (j == column -1)) // 判斷是否為 第0行 或 第column-1(最後1行)行，填充 + 號，其餘行填出 空格 號
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