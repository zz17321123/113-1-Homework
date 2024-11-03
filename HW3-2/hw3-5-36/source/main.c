// (Towers of Hanoi) �{��
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

	printf("Enter disks amount: "); // ��J Towers of Hanoi ��L���ƶq 
	scanf("%d", &input_disks);

	printf("Enter source peg (ex. A): "); // ��J Towers of Hanoi ��l�W�l���W��
	scanf(" %c", &input_source);

	printf("Enter auxiliary peg (ex. B): "); // ��J Towers of Hanoi ���U�W�l���W��
	scanf(" %c", &input_auxiliary);

	printf("Enter target peg (ex. C): "); // ��J Towers of Hanoi �ؼЬW�l���W��
	scanf(" %c", &input_target);

	printf("\n");

	hanoi(input_disks, input_source, input_auxiliary, input_target);

	printf("Moved count is %d\n", move_count); // ����`�@���ʪ�����

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
		// �N�e n - 1 �Ӷ�L�q source ���� auxiliary
		hanoi(disks - 1, source, target, auxiliary);
		// �N�� n �Ӷ�L�q source ���� target
		printf("Move disk%d from %c to %c\n", disks, source, target);
		// �N�e n - 1 �Ӷ�L�q auxiliary ���� target
		hanoi(disks - 1, auxiliary, source, target);
		move_count++;
	}
}