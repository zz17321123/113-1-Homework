// (Hollow Rectangle of Plus Symbols) �{��
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


	for (int i = 0; i < row; i++) // ��C(Row)
	{
		for (int j = 0; j < column; j++) // ����(Column)
		{
			if ((i == 0) || (i == row-1)) // �P�_�O�_�� ��0�C �� ��row-1(�̫�1�C)�C �ɡA�� + ��
				printf("+");
			else // �Ϥ� ��1�C ��
			{
				if ((j == 0) || (j == column -1)) // �P�_�O�_�� ��0�� �� ��column-1(�̫�1��)��A��R + ���A��l���X �Ů� ��
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