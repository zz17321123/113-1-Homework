// (Largest and Smallest Integers) �{��
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	int largest_num; // �x�s �̤j�� ���
	int smallest_num;// �x�s �̤p�� ���

	printf("�п�J �Ĥ@�� ���: ");
	scanf("%d", &num1);

	printf("�п�J �ĤG�� ���: ");
	scanf("%d", &num2);

	printf("�п�J �ĤT�� ���: ");
	scanf("%d", &num3);

	// �P�_ num1 > num2 > num3 �����p
	if ((num1 > num2) && (num2 > num3))
	{
		largest_num = num1;
		smallest_num = num3;
	}
	// �P�_ num1 > num3 > num2 �����p
	else if ((num1 > num3) && (num3 > num2))
	{
		largest_num = num1;
		smallest_num = num2;
	}

	// �P�_ num2 > num1 > num3 �����p
	if ((num2 > num1) && (num1 > num3))
	{
		largest_num = num2;
		smallest_num = num3;
	}
	// �P�_ num2 > num3 > num1 �����p
	else if ((num2 > num3) && (num3 > num1))
	{
		largest_num = num2;
		smallest_num = num1;
	}

	// �P�_ num3 > num1 > num2 �����p
	if ((num3 > num1) && (num1 > num2))
	{
		largest_num = num3;
		smallest_num = num2;
	}
	// �P�_ num3 > num2 > num1 �����p
	else if ((num3 > num2) && (num2 > num1))
	{
		largest_num = num3;
		smallest_num = num1;
	}

	printf("\n");

	printf("�̤j����ƬO %d\n", largest_num);
	printf("�̤p����ƬO %d\n", smallest_num);

	system("pause");
	return 0;
}