// (Hollow Rectangle of Plus Symbols) �{��
#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 0; i < 3; i++) // ��C(Row)
	{
		for (int j = 0; j < 12; j++) // ����(Column)
		{
			if ((i == 0) || (i == 2)) // �P�_�O�_�� ��0�C �� ��2�C �ɡA�� + ��
				printf("+");
			else // �Ϥ� ��1�C ��
			{
				if ((j == 0) || (j == 11)) // �P�_�O�_�� ��0�� �� ��11��A��R + ���A��l���X �Ů� ��
					printf("+");
				else
					printf(" ");
			}
		}
		printf("\n"); // ���ܤU�@�C
	}

	system("pause");
	return 0;
}