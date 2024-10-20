// (Tariangle-Printing Program) 程式
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("(A)");
	printf("\n");

	/*
		(A) 說明:

		i 為橫列(Row) 從 1~10 共 10 列，
		j 為每列 * 號的數量，從 1 到 當前列值。

		第 1 列，1 顆 * 號
		第 2 列，2 顆 * 號
		...
	*/

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("%s", "*");
		
		printf("\n");
	}

	printf("(B)");
	printf("\n");

	/*
		(B) 說明:

		i 為橫列(Row) 從 10~1 共 10 列，
		j 為每列 * 號的數量，從 1 到 當前列值。
	
		第 10 列，10 顆 * 號 (實際上是第 1 列)
		第  9 列， 9 顆 * 號 (實際上是第 2 列)
		...
	*/

	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
			printf("%s", "*");

		printf("\n");
	}

	printf("(C)");
	printf("\n");

	/*
		(C) 說明:

		i 為橫列(Row)    從 1~10 共 10 列，
		j 為直行(Column) 從 1~10 共 10 行。

		判斷當 i <= j時，輸出 * 號，
		反之，輸出 空格 號。

		第 1 列，10 顆 * 號 (* 號位置為 第 1~10 行)
		第 2 列， 9 顆 * 號 (* 號位置為 第 2~10 行)
		...
	*/

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (i <= j)
				printf("%s", "*");
			else
				printf("%s", " ");

		}

		printf("\n");
	}

	printf("(D)");
	printf("\n");

	/*
		(D) 說明:

		i 為橫列(Row)    從 10~1 共 10 列，
		j 為直行(Column) 從 1~10 共 10 行。

		判斷當 i <= j時，輸出 * 號，
		反之，輸出 空格 號。

		第 10 列， 1 顆 * 號 (實際上是第 1 列，* 號位置為 第 10 行)
		第  9 列， 2 顆 * 號 (實際上是第 2 列，* 號位置為 第 9~10 行)
		...
	*/

	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (i <= j)
				printf("%s", "*");
			else
				printf("%s", " ");

		}

		printf("\n");
	}

	system("pause");
	return 0;
}