// (Towers of Hanoi) 程式
#include <stdio.h>
#include <stdlib.h>

void hanoi (int, char, char, char);

int move_count = 0;

int main(void)
{
	int input_disks;
	char input_source;
	char input_auxiliary;
	char input_target;

	printf("Enter disks amount: "); // 輸入 Towers of Hanoi 圓盤的數量 
	scanf("%d", &input_disks);

	printf("Enter source peg (ex. A): "); // 輸入 Towers of Hanoi 初始柱子的名稱
	scanf(" %c", &input_source);

	printf("Enter auxiliary peg (ex. B): "); // 輸入 Towers of Hanoi 輔助柱子的名稱
	scanf(" %c", &input_auxiliary);

	printf("Enter target peg (ex. C): "); // 輸入 Towers of Hanoi 目標柱子的名稱
	scanf(" %c", &input_target);

	printf("\n");

	hanoi(input_disks, input_source, input_auxiliary, input_target);

	printf("Moved count is %d\n", move_count); // 顯示總共移動的次數

	system("pause");
	return 0;
}

void hanoi(int disks, char source, char auxiliary, char target)
{
	if (disks == 1)
	{
		printf("Move disk%d from %c to %c\n", disks, source, target);
		move_count++;
	}
	else
	{
		// 將前 n - 1 個圓盤從 source 移到 auxiliary
		hanoi(disks - 1, source, target, auxiliary);
		// 將第 n 個圓盤從 source 移到 target
		printf("Move disk%d from %c to %c\n", disks, source, target);
		// 將前 n - 1 個圓盤從 auxiliary 移到 target
		hanoi(disks - 1, auxiliary, source, target);
		move_count++;
	}
}