// (Odd or Even) �{��
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;

	printf("�п�J�@�Ӿ��: ");
	scanf("%d", &num);

	printf("\n");

	if (num % 2 == 0) //�P�_�O�_�i�H�Q 2 �㰣�A�O���ܬ� ���ơA�Ϥ��� �_��
	{
		printf("%d �O����\n", num);
	}
	else
	{
		printf("%d �O�_��\n", num);
	}

	system("pause");
	return 0;
}