// (Diamond-Printing Program) �{��
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Max = 5;
	int Min = 5;

	/*
		ø�s�p�۹Ϯ�:
		
		i ����C(Row)    �q 1~9 �@ 9 �C
		j ������(Column) �q 1~9 �@ 9 �C
		Max ������ * ���k���m (�w�]��5)
		Min ������ * �������m (�w�]��5)

		�P�_�� (j >= Min) && (j <= Max)�A��X * ��
		�Ϥ��A��X �Ů� ��

		�P�_�� i < 5�A Max++ �B Min--�A(Max �q5~9�AMin �q 5~1)
		�Ϥ��A Max-- �B Min++�A(Max �q9~5�AMin �q 1~5)
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