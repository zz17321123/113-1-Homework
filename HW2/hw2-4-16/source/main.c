// (Tariangle-Printing Program) �{��
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("(A)");
	printf("\n");

	/*
		(A) ����:

		i ����C(Row) �q 1~10 �@ 10 �C�A
		j ���C�C * �����ƶq�A�q 1 �� ��e�C�ȡC

		�� 1 �C�A1 �� * ��
		�� 2 �C�A2 �� * ��
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
		(B) ����:

		i ����C(Row) �q 10~1 �@ 10 �C�A
		j ���C�C * �����ƶq�A�q 1 �� ��e�C�ȡC
	
		�� 10 �C�A10 �� * �� (��ڤW�O�� 1 �C)
		��  9 �C�A 9 �� * �� (��ڤW�O�� 2 �C)
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
		(C) ����:

		i ����C(Row)    �q 1~10 �@ 10 �C�A
		j ������(Column) �q 1~10 �@ 10 ��C

		�P�_�� i <= j�ɡA��X * ���A
		�Ϥ��A��X �Ů� ���C

		�� 1 �C�A10 �� * �� (* ����m�� �� 1~10 ��)
		�� 2 �C�A 9 �� * �� (* ����m�� �� 2~10 ��)
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
		(D) ����:

		i ����C(Row)    �q 10~1 �@ 10 �C�A
		j ������(Column) �q 1~10 �@ 10 ��C

		�P�_�� i <= j�ɡA��X * ���A
		�Ϥ��A��X �Ů� ���C

		�� 10 �C�A 1 �� * �� (��ڤW�O�� 1 �C�A* ����m�� �� 10 ��)
		��  9 �C�A 2 �� * �� (��ڤW�O�� 2 �C�A* ����m�� �� 9~10 ��)
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