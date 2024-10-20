// (Pythagorean Triples) 程式
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a; // 三角形鄰邊 (最短邊)
	int b; // 三角形對邊
	int c; // 三角形斜邊 (最長邊)

	int count = 0;

	printf("%s%2c%4s%2c%4s\n", "a*a", '+', "b*b", '=', "c*c");
	printf("\n");

	/*
		畢氏定理(暴力破解法):

		根據題目的要求，求出 c <= 500 所有的符合畢氏定理的數值，
		將 a、b 與 c 分別用 for 迴圈從 1 ~ 500。

		判斷 a + b > c 是否成立 (三角形兩邊長大於第三邊長) 且 a <= b (避免重複數值出現)，
		判斷 a^2 + b^2 = c^2 是否成立，
		輸出符合上述條件的數值。
	*/
	for (c = 1; c <= 500; c++)
	{
		for (b = 1; b <= 500; b++)
		{
			for (a = 1; a <= 500; a++)
			{
				if ((a + b > c) && (a <= b))
				{
					if ((a * a + b * b) == c * c)
						printf("%3d%6d%6d\n", a, b, c);
				}
			}
		}
	}

	system("pause");
	return 0;
}